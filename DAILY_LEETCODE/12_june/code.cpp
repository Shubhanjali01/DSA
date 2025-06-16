#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int maxDiff = 0;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            int diff = abs(nums[i] - nums[(i + 1) % n]);
            maxDiff = max(maxDiff, diff);
        }
        return maxDiff;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {1, 2, 4};
    cout << "Output: " << sol.maxAdjacentDistance(nums1) << endl; // Output: 3

    vector<int> nums2 = {-5, -10, -5};
    cout << "Output: " << sol.maxAdjacentDistance(nums2) << endl; // Output: 5

    return 0;
}
