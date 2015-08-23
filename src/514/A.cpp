#include <iostream>

/*
 * Contest: Code Forces Round #291 (Task 514-A)
 * URL: http://codeforces.ru/contest/514/problem/A
 */

inline long long invert(long long x)
{
    return (x < 5) ? x : 9 - x;
}

long long solve(long long n, long long p)
{
    if (n >= 10)
    {
        return invert(n % 10) * p + solve(n / 10, p * 10);
    }
    else
    {
        return p * ((n == 9) ? 9 : invert(n));
    }
}

int main(int argc, char** argv)
{
    long long n; std::cin >> n;

    std::cout << solve(n, 1) << std::endl;

    return 0;
}
