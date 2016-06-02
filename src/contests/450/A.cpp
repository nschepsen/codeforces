#include <iostream>

/*
 * Contest: Code Forces Round #257 (Task 450-A)
 * URL: http://codeforces.ru/contest/450/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, m, ans = 1; std::cin >> n >> m;

    for (int i = 1, max = 0, x, r; i <= n; ++i)
    {
        std::cin >> x;

        if(max <= (r = (x + m - 1) / m))
        {
            max = r;
            ans = i;
        }
    }

    std::cout << ans << std::endl; return 0;
}
