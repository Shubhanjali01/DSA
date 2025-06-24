#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:

  vector<int> OptimizedfindKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> keyIndices;
        vector<int> result;

        // Step 1: Collect indices where nums[j] == key
        for (int j = 0; j < nums.size(); ++j) {
            if (nums[j] == key) {
                keyIndices.push_back(j);
            }
        }

        // Step 2: Two pointers method
        int p = 0;
        for (int i = 0; i < nums.size(); ++i) {
            // Move pointer forward if too far left
            while (p < keyIndices.size() && keyIndices[p] < i - k) {
                p++;
            }
            // Check if this i is k-distant from current p
            if (p < keyIndices.size() && abs(i - keyIndices[p]) <= k) {
                result.push_back(i);
            }
        }

        return result;
    }
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> keyIndices;
        vector<int> result;

        // Step 1: Find all indices where nums[j] == key
        for (int j = 0; j < nums.size(); ++j) {
            if (nums[j] == key) {
                keyIndices.push_back(j);
            }
        }

        // Step 2: For each i, check if abs(i - j) <= k for any j
        for (int i = 0; i < nums.size(); ++i) {
            for (int j : keyIndices) {
                if (abs(i - j) <= k) {
                    result.push_back(i);
                    break; // No need to check further for this i
                }
            }
        }

        return result;
    }
};

int main() {
    Solution sol;

    // Example 1
    vector<int> nums1 = {3, 4, 9, 1, 3, 9, 5};
    int key1 = 9;
    int k1 = 1;
    // vector<int> result1 = sol.findKDistantIndices(nums1, key1, k1);
    vector<int> result1 = sol.OptimizedfindKDistantIndices(nums1, key1, k1);

    cout << "Example 1 Output: ";
    for (int index : result1) {
        cout << index << " ";
    }
    cout << endl;

    // Example 2
    vector<int> nums2 = {2, 2, 2, 2, 2};
    int key2 = 2;
    int k2 = 2;
    // vector<int> result2 = sol.findKDistantIndices(nums2, key2, k2);
    vector<int> result2 = sol.OptimizedfindKDistantIndices(nums2, key2, k2);

    cout << "Example 2 Output: ";
    for (int index : result2) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}
