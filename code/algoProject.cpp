#include <iostream>
#include <vector>
using namespace std;

/*
    subsetSumBruteForce
    --------------------
    Uses brute force with bitmasking to examine every possible subset 
    of the input list. For each subset, the function calculates the sum 
    of the included elements and checks whether it matches the target.

    Important:
    - Subsets are examined in increasing bitmask order (0 to 2^n - 1).
    - Because of this, the function returns the *first* subset that 
      matches the target sum.
    - If no subset matches the target, the function returns an empty vector.

    Returns:
        A vector containing the first valid subset that sums to the target,
        or an empty vector if no such subset exists.
*/
vector<int> subsetSumBruteForce(const vector<int>& nums, int target) {

    int n = nums.size();
    int totalSubsets = 1 << n; // 2^n possible subsets

    // Loop through all possible subsets
    for (int mask = 0; mask < totalSubsets; mask++) {

        vector<int> subset;
        int sum = 0;

        // Check each bit to determine which elements to include
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {   // If bit i is 1 -> include nums[i]
                subset.push_back(nums[i]);
                sum += nums[i];
            }
        }

        // If this subset matches the target, return it
        if (sum == target) {
            return subset;
        }
    }

    // If no subset equals the target, return empty vector
    return {};
}

int main() {

    int n, target;

    cout << "Enter number of elements: ";
    cin >> n;

    // Hard stop: exit if n is greater than 30
    if (n > 30) {
        cout << "\nERROR: Brute force subset search cannot handle more than 30 elements." << endl;
        cout << "2^n grows too fast, making computation infeasible.\n";
        cout << "Please restart the program and enter 30 or fewer elements.\n";
        return 0;   // Exit program immediately
    }  

    vector<int> nums(n);
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter target sum: ";
    cin >> target;

    // Run brute force subset sum search
    vector<int> result = subsetSumBruteForce(nums, target);

    // Display output
    if (!result.empty()) {
        cout << "Subset found that sums to " << target << ": ";
        for (int x : result) cout << x << " ";
        cout << endl;

    } else {
        cout << "No subset found that sums to " << target << endl;
    }

    return 0;
}