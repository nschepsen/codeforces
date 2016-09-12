#include <iostream>

/*
 * Contest: Code Forces Round #357 (Task 681-B)
 * URL: http://codeforces.ru/contest/681/problem/B
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n; std::cin >> n;

    for (int a = 0, tmp; a < n; ++a)
    {
        if (a * 1234567 > n) { break; }

        for (int b = 0; b < n; ++b)
        {
            tmp = (a * 1234567 + b * 123456);

            if (tmp > n)
            {
                break;
            }

            if (!((n - tmp) % 1234))
            {
                std::cout << "YES" << std::endl; return 0;
            }
        }
    }

    std::cout << "NO" << std::endl; return 0;
}
