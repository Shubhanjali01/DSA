#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num);
        string t = s;

        // Create max number: replace first non-'9' digit with '9'
        size_t pos = s.find_first_not_of('9');
        if (pos != string::npos) {
            char a = s[pos];
            replace(s.begin(), s.end(), a, '9');
        }

        // Create min number: replace the first digit with '0'
        char b = t[0];
        replace(t.begin(), t.end(), b, '0');

        return stoi(s) - stoi(t);
    }
};

int main() {
    Solution sol;

    // Test case 1
    int num1 = 11891;
    cout << "Input: " << num1 << endl;
    cout << "Output: " << sol.minMaxDifference(num1) << endl << endl;

    // Test case 2
    int num2 = 90;
    cout << "Input: " << num2 << endl;
    cout << "Output: " << sol.minMaxDifference(num2) << endl << endl;

    // You can add more test cases as needed
    return 0;
}
