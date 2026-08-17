# Brute Force Subset Sum in C++

A C++ implementation of the **Subset Sum problem** using a brute-force exhaustive search approach.

The project demonstrates fundamental algorithm-design concepts by generating and evaluating all possible subsets of a given set to determine whether any subset produces a required target sum.

## Project Overview

The Subset Sum problem asks:

> Given a set of integers and a target value, does there exist a subset whose elements add up exactly to the target?

This project solves the problem using an exhaustive brute-force algorithm.

Instead of using optimization techniques such as dynamic programming, the algorithm systematically examines every possible subset of the input set.

## Algorithm

For a set containing `n` elements, there are:

```text
2^n
```

possible subsets.

The program represents each possible subset using a binary bitmask.

Each bit determines whether the corresponding element is included in the current subset.

For example, for three elements:

```text
000 → no elements selected
001 → first element selected
010 → second element selected
011 → first and second elements selected
100 → third element selected
...
111 → all elements selected
```

The program evaluates these combinations and calculates the sum of the selected elements.

If a subset produces the required target sum, the algorithm identifies it as a valid solution.

## How the Brute-Force Approach Works

The algorithm follows these general steps:

1. Read or define the input set.
2. Define the target sum.
3. Calculate the total number of possible subsets as `2^n`.
4. Generate every subset using bitmasks.
5. Calculate the sum of the elements included in each subset.
6. Compare each subset sum with the target value.
7. Report a matching subset when one is found.

## Bitmasking

Bitmasking provides an efficient way to represent subsets during exhaustive search.

For each integer from:

```text
0
```

to:

```text
2^n - 1
```

the binary representation of that number identifies which elements belong to the subset.

A bit value of:

```text
1
```

means the corresponding element is included.

A bit value of:

```text
0
```

means the corresponding element is excluded.

This avoids having to manually create every possible subset.

## Time Complexity

The brute-force algorithm evaluates every possible subset.

For `n` elements, the number of subsets is:

```text
2^n
```

Therefore, the algorithm has exponential time complexity.

```text
O(2^n)
```

If the algorithm also iterates through the elements while evaluating every subset, the practical running time can be expressed as:

```text
O(n × 2^n)
```

This means the execution time increases rapidly as the input size increases.

## Space Complexity

The algorithm requires relatively little additional memory because subsets can be represented using bitmasks rather than storing all subsets simultaneously.

The exact space requirement depends on the implementation, but the brute-force approach primarily focuses on the high computational cost caused by the exponential number of subsets.

## Why Brute Force?

Brute-force search is not the most efficient solution for large Subset Sum problems.

However, it is useful for demonstrating:

- Exhaustive search
- Algorithm design
- Bit manipulation
- Combinatorial problems
- Exponential complexity
- Complexity analysis
- Trade-offs between simplicity and efficiency

It also guarantees that all possible combinations are considered.

## Technologies and Concepts

- C++
- Algorithms
- Brute-Force Search
- Exhaustive Search
- Bitmasking
- Subset Generation
- Combinatorial Problems
- Time Complexity Analysis
- Space Complexity Analysis

## Project Structure

```text
subset-sum-brute-force-cpp/
│
├── code/
│   └── algoProject.cpp
│
├── report/
│   └── Algorithm Project.pdf
│
└── README.md
```

## Main Files

- `code/algoProject.cpp` — C++ implementation of the brute-force Subset Sum algorithm
- `report/Algorithm Project.pdf` — Project report describing the algorithm, implementation, analysis, and results
- `README.md` — Repository overview and documentation

## How to Run

### 1. Clone or Download the Repository

Clone the repository or download it from GitHub.

### 2. Open the C++ File

Navigate to:

```text
code/algoProject.cpp
```

### 3. Compile the Program

Using `g++`:

```bash
g++ code/algoProject.cpp -o subset_sum
```

### 4. Run the Program

On macOS or Linux:

```bash
./subset_sum
```

On Windows:

```bash
subset_sum.exe
```

## Example Concept

Suppose the input set is:

```text
{3, 5, 7, 10}
```

and the target is:

```text
15
```

The algorithm examines all possible subsets.

One valid combination would be:

```text
{5, 10}
```

because:

```text
5 + 10 = 15
```

The program determines whether such a subset exists by exhaustively checking the possible combinations.

## Key Learning Outcomes

This project demonstrates:

- Applying brute-force techniques to an algorithmic problem
- Generating subsets using binary representations
- Using bitwise operations in C++
- Understanding exponential growth
- Evaluating algorithm efficiency
- Comparing input size with computational cost
- Implementing and testing an exhaustive-search algorithm

## Limitations

The primary limitation of the brute-force approach is scalability.

Because the number of subsets doubles whenever another element is added, the algorithm becomes computationally expensive for large input sizes.

For example:

```text
10 elements  → 1,024 subsets
20 elements  → 1,048,576 subsets
30 elements  → 1,073,741,824 subsets
```

This demonstrates why exponential algorithms are generally practical only for relatively small inputs.

More advanced techniques such as dynamic programming or meet-in-the-middle approaches can solve some Subset Sum instances more efficiently.

## Notes

- This project focuses specifically on the brute-force approach to the Subset Sum problem.
- The implementation is intended to demonstrate exhaustive search and algorithm complexity.
- The project was developed for educational purposes.

## Authors

- Ghala Alghamdi
- Hiba Amanulla
- Effat University
- Computer Science Department
- Course: CS3012 – Algorithm Analysis
- Instructor: Dr. Omar AlZoubi
