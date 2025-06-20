#include <iostream>
#include <string>
#include <algorithm> // for min and max
#include <cmath>     // for abs
using namespace std;

class Solution
{
public:
    int maxDistance(string s, int k)
    {
        int ans = 0;
        int north = 0, south = 0, east = 0, west = 0;

        for (char it : s)
        {
            switch (it)
            {
            case 'N':
                north++;
                break;
            case 'S':
                south++;
                break;
            case 'E':
                east++;
                break;
            case 'W':
                west++;
                break;
            }

            int times1 = min({north, south, k});
            int times2 = min({east, west, k - times1});
            ans = max(ans, count(north, south, times1) + count(east, west, times2));
        }

        return ans;
    }

    int count(int drt1, int drt2, int times)
    {
        return abs(drt1 - drt2) + times * 2;
    }
};

//  Driver Code
int main()
{
    Solution sol;

    string s1 = "NSWE"; // test input 1
    int k1 = 1;
    cout << "Test Case 1:\nInput: " << s1 << ", k = " << k1 << "\nOutput: " << sol.maxDistance(s1, k1) << endl;

    string s2= "NSWWEW";// test input 2
    int k2 = 3;
    cout << "Test Case 2:\nInput: " << s2 << ", k = " << k2 << "\nOutput: " << sol.maxDistance(s2, k2) << endl;

    return 0;
}
