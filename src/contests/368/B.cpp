#include <iostream>
#include <set>
#include <vector>

/*
 * Contest: Code Forces Round #215 (Task 368-B)
 * URL: http://codeforces.ru/contest/368/problem/B
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, m; std::cin >> n >> m;

    std::set<int> items;

    std::vector<int> v(n), req(m), dp(n + 1, 0);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> v[i];
    }

    for (int i = 0; i < m; ++i)
    {
        std::cin >> req[i];
    }

    for (int i = n - 1; i >= 0; --i)
    {
        dp[i] = dp[i + 1] + (items.count(v[i]) ? 0 : 1); items.insert(v[i]);
    }

    for (int i = 0; i < m; ++i)
    {
        std::cout << dp[req[i] - 1] << std::endl;
    }

    return 0;
}
