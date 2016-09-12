#include <iostream>
#include <string>
#include <vector>

/*
 * Contest: Code Forces Round #186 (Task 313-B)
 * URL: http://codeforces.ru/contest/313/problem/B
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    std::string s; int n;

    std::cin >> s >> n;

    std::vector<int> dp(s.length(), 0);

    for (int i = 1, c = 0; i < s.length(); ++i)
    {
        dp[i] = dp[i - 1] + (s[i] == s[i - 1]);
    }

    for (int i = 0, l, r; i < n; ++i)
    {
        std::cin >> l >> r;

        std::cout << dp[--r] - dp[--l] << std::endl;
    }

    return 0;
}
