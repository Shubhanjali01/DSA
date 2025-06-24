#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

class Solution {
// public:
//     bool isPalindrome(const string &s) {
//         int l = 0, r = s.size() - 1;
//         while (l < r) {
//             if (s[l++] != s[r--]) return false;
//         }
//         return true;
//     }
// 
//     string toBaseK(long long num, int k) {
//         string res;
//         while (num > 0) {
//             res += (num % k) + '0';
//             num /= k;
//         }
//         reverse(res.begin(), res.end());
//         return res;
//     }
// 
//     void generatePalindromes(int len, bool even, vector<long long> &results, int base, int &n) {
//         int start = pow(10, len - 1);
//         int end = pow(10, len);
// 
//         for (int i = start; i < end && n > 0; ++i) {
//             string left = to_string(i);
//             string right = left;
//             reverse(right.begin(), right.end());
//             string full = even ? left + right : left + right.substr(1);
//             long long num = stoll(full);
//             if (isPalindrome(toBaseK(num, base))) {
//                 results.push_back(num);
//                 n--;
//             }
//         }
//     }
// 
//     long long kMirror(int k, int n) {
//         vector<long long> res;
//         int len = 1;
//         while (n > 0) {
//             generatePalindromes(len, true, res, k, n);  // even length
//             generatePalindromes(len, false, res, k, n); // odd length
//             len++;
//         }
// 
//         long long sum = 0;
//         for (auto num : res) sum += num;
//         return sum;
//     }

private:
    int digit[100];

public:
    long long kMirror(int k, int n) {
        auto isPalindrome = [&](long long x) -> bool {
            int length = -1;
            while (x) {
                ++length;
                digit[length] = x % k;
                x /= k;
            }
            for (int i = 0, j = length; i < j; ++i, --j) {
                if (digit[i] != digit[j]) {
                    return false;
                }
            }
            return true;
        };

        int left = 1, count = 0;
        long long ans = 0;
        while (count < n) {
            int right = left * 10;
            // op = 0 indicates enumerating odd-length palindromes
            // op = 1 indicates enumerating even-length palindromes
            for (int op = 0; op < 2; ++op) {
                // enumerate i'
                for (int i = left; i < right && count < n; ++i) {
                    long long combined = i;
                    int x = (op == 0 ? i / 10 : i);
                    while (x) {
                        combined = combined * 10 + x % 10;
                        x /= 10;
                    }
                    if (isPalindrome(combined)) {
                        ++count;
                        ans += combined;
                    }
                }
            }
            left = right;
        }
        return ans;
    }
};

// Main function
int main() {
    Solution sol;
    int k, n;
    cout << "Enter base k: ";
    cin >> k;
    cout << "Enter number n: ";
    cin >> n;
    long long result = sol.kMirror(k, n);
    cout << "Sum of first " << n << " k-mirror numbers: " << result << endl;
    return 0;
}
