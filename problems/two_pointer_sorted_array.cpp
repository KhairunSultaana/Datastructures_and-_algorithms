#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSumSorted(const vector<int>& nums, int target) {
    int left = 0;                // Pointer starting from the beginning
    int right = nums.size() - 1; // Pointer starting from the end

    while (left < right) {
        int sum = nums[left] + nums[right];

        if (sum == target) {
            return {left, right};
        } else if (sum < target) {
            left++; // Move left pointer right to increase the sum
        } else {
            right--; // Move right pointer left to decrease the sum
        }
    }

    return {}; // Return empty vector if no solution found
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 6, 8};
    int target = 7;

    vector<int> result = twoSumSorted(nums, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}
