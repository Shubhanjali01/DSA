#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;
const int MAX = 200005;

vector<long long> factorial(MAX), inv_factorial(MAX);

// Fast exponentiation
long long power(long long x, long long y) {
    long long res = 1;
    x %= MOD;
    while (y) {
        if (y & 1) res = res * x % MOD;
        x = x * x % MOD;
        y >>= 1;
    }
    return res;
}

// Precompute factorials and inverse factorials
void precompute() {
    factorial[0] = 1;
    for (int i = 1; i < MAX; ++i)
        factorial[i] = factorial[i - 1] * i % MOD;

    inv_factorial[MAX - 1] = power(factorial[MAX - 1], MOD - 2);
    for (int i = MAX - 2; i >= 0; --i)
        inv_factorial[i] = inv_factorial[i + 1] * (i + 1) % MOD;
}

// nCk % MOD
long long comb(int n, int k) {
    if (k < 0 || k > n) return 0;
    return factorial[n] * inv_factorial[k] % MOD * inv_factorial[n - k] % MOD;
}

class Solution {
public:
    int countGoodArrays(int n, int m, int k) {
        precompute();  // prepare nCr tables
        long long ways = comb(n - 1, k);
        ways = ways * m % MOD;
        ways = ways * power(m - 1, n - 1 - k) % MOD;
        return ways;
    }
};

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    Solution sol;
    cout << sol.countGoodArrays(n, m, k) << endl;
    return 0;
}
