#include <iostream>

/*
 * Contest: Educational Codeforces Round 1
 * URL: http://codeforces.ru/contest/598/problem/A
 */

inline void solve()
{
    long long n, answer = 0, i = 1;

    std::cin >> n;

    answer = (n *(n + 1)) >> 1;

    while(i <= n)
    {
        answer -= (i << 1); i <<= 1;
    }

    std::cout << answer << std::endl;
}

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n; std::cin >> n;

    for (int i = 0; i < n; ++i) solve();

    return 0;
}
