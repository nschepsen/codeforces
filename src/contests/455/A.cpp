#include <iostream>
#include <map>
#include <vector>

/*
 * Contest: Code Forces Round #260 (Task 455-A)
 * URL: http://codeforces.ru/contest/455/problem/A
 */

#define N 100000

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    long long n; std::cin >> n;

    std::vector<long long> dp(N + 1, 0);
    std::map<long long, long long> m;

    for (long long i = 0, id; i < n; ++i)
    {
        std::cin >> id; m[id]++;
    }

    dp[1] = m[1];

    for (long long i = 2; i <= N; ++i)
    {
        dp[i] = std::max(dp[i - 1], dp[i - 2] + m[i] * i);
    }

    std::cout << dp[N] << std::endl; return 0;
}
