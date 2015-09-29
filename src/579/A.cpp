#include <iostream>

/*
 * Contest: Code Forces Round #320 (Task 579-A)
 * URL: http://codeforces.ru/contest/579/problem/A
 */

int main(int argc, char** argv)
{
    int x, ans = 0; std::cin >> x;

    while (x >= 1)
    {
        if (!(x & 1))
        {
            x >>= 1;
        }
        else
        {
            x--; ans++;
        }
    }

    std::cout << ans << std::endl;

    return 0;
}
