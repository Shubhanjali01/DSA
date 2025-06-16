#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool canFormPairs(vector<int>& nums, int p, int maxDiff) {
        int count = 0;
        int i = 0;
        while (i < nums.size() - 1) {
            if (nums[i + 1] - nums[i] <= maxDiff) {
                count++;
                i += 2; // skip both elements to avoid overlapping
            } else {
                i++;
            }
        }
        return count >= p;
    }

    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(), nums.end());

        int low = 0;
        int high = nums[nums.size() - 1] - nums[0];
        int answer = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (canFormPairs(nums, p, mid)) {
                answer = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return answer;
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {10,1,2,7,1,3};
    int p1 = 2;
    cout << "Output: " << sol.minimizeMax(nums1, p1) << endl;

    vector<int> nums2 = {4,2,1,2};
    int p2 = 1;
    cout << "Output: " << sol.minimizeMax(nums2, p2) << endl;

    return 0;
}
