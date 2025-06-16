#include <iostream>
#include <vector>
#include <algorithm> // for max

using namespace std;

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int min_val = nums[0];
        int max_diff = -1;

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > min_val) {
                max_diff = max(max_diff, nums[i] - min_val);
            } else {
                min_val = nums[i];
            }
        }

        return max_diff;
    }
};

int main() {
    Solution sol;

    // Test case 1
    vector<int> nums1 = {7, 1, 5, 4};
    cout << "Test 1 Output: " << sol.maximumDifference(nums1) << endl;

    // Test case 2
    vector<int> nums2 = {9, 4, 3, 2};
    cout << "Test 2 Output: " << sol.maximumDifference(nums2) << endl;

    // Test case 3
    vector<int> nums3 = {1, 5, 2, 10};
    cout << "Test 3 Output: " << sol.maximumDifference(nums3) << endl;

    return 0;
}
