#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i += 3) {
            int a = nums[i], b = nums[i + 1], c = nums[i + 2];
            if (c - a > k) return {}; // max - min > k → invalid group
            res.push_back({a, b, c});
        }
        return res;
    }
};

int main() {
    Solution sol;

    // Example Test Case
    vector<int> nums = {1, 3, 4, 8, 7, 9, 3, 5, 1};
    int k = 2;

    vector<vector<int>> result = sol.divideArray(nums, k);

    if (result.empty()) {
        cout << "[]\n";
    } else {
        cout << "[\n";
        for (const auto& group : result) {
            cout << "  [";
            for (int i = 0; i < group.size(); ++i) {
                cout << group[i];
                if (i != group.size() - 1) cout << ", ";
            }
            cout << "]\n";
        }
        cout << "]\n";
    }

    return 0;
}
