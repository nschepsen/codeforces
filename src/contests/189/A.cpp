#include <iostream>
#include <vector>

/*
 * Contest: Code Forces Round #119 (Task 189-A)
 * URL: http://codeforces.ru/contest/189/problem/A
 */

int main(int argc, char** argv)
{
    int n, a, b, c; std::cin >> n >> a >> b >> c;

    std::vector<int> dp(n + 1, 0);

    if((n - a) >= 0) dp[n - a] = 1;
    if((n - b) >= 0) dp[n - b] = 1;
    if((n - c) >= 0) dp[n - c] = 1;

    for (int i = n; i > 0; --i)
    {
        if(dp[i] == 0) continue;

        if((i - a) >= 0)
        {
            dp[i - a] = std::max(dp[i] + 1, dp[i - a]);
        }
        if((i - b) >= 0)
        {
            dp[i - b] = std::max(dp[i] + 1, dp[i - b]);
        }
        if((i - c) >= 0)
        {
            dp[i - c] = std::max(dp[i] + 1, dp[i - c]);
        }
    }

    std::cout << dp[0] << std::endl; return 0;
}
