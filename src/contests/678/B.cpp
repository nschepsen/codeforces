#include <iostream>

/*
 * Contest: Educational Codeforces Round 13
 * URL: http://codeforces.ru/contest/678/problem/B
 */

inline bool isLeapYear(int n)
{
    return (!(n % 400) || (!(n & 3) && (n % 100)));
}

int main(int argc, char** argv)
{
    int n, answer; std::cin >> n;

    for (int i = 1, r = 0;; ++i)
    {
        r = (r + 365 + (isLeapYear(n + i) ? 1 : 0)) % 7;

        if (r == 0 && isLeapYear(n) == isLeapYear(n + i))
        {
            answer = n + i; break;
        }
    }

    std::cout << answer << std::endl; return 0;
}
