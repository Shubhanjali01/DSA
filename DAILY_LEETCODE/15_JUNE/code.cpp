#include <iostream>
#include <string>
#include <algorithm> // for replace
using namespace std;

class Solution {
public:
    int maxDiff(int num) {
        string s = to_string(num);

        // Maximize the number
        string maxStr = s;
        for (char ch : s) {
            if (ch != '9') {
                replace(maxStr.begin(), maxStr.end(), ch, '9');
                break;
            }
        }

        // Minimize the number
        string minStr = s;
        if (s[0] != '1') {
            char target = s[0];
            replace(minStr.begin(), minStr.end(), target, '1');
        } else {
            for (int i = 1; i < s.length(); ++i) {
                if (s[i] != '0' && s[i] != '1') {
                    char target = s[i];
                    replace(minStr.begin(), minStr.end(), target, '0');
                    break;
                }
            }
        }

        int maxNum = stoi(maxStr);
        int minNum = stoi(minStr);
        return maxNum - minNum;
    }
};

int main() {
    Solution sol;
    
    // Test case 1
    int num1 = 555;
    cout << "Input: " << num1 << endl;
    cout << "Max Difference: " << sol.maxDiff(num1) << endl;

    // Test case 2
    int num2 = 9;
    cout << "Input: " << num2 << endl;
    cout << "Max Difference: " << sol.maxDiff(num2) << endl;

    // Test case 3 (custom)
    int num3 = 123456;
    cout << "Input: " << num3 << endl;
    cout << "Max Difference: " << sol.maxDiff(num3) << endl;

    return 0;
}
