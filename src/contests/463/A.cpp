#include <iostream>

/*
 * Contest: Code Forces Round #264 (Task 463-A)
 * URL: http://codeforces.ru/contest/463/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, s, ans = -1;

    std::cin >> n >> s;

    for (int i = 0, x, y; i < n; ++i)
    {
        std::cin >> x >> y;

        if(s >= (x + 0.01 * y))
        {
            ans = std::max(ans, (100 - y) % 100);
        }
    }

    std::cout << ans << std::endl; return 0;
}
