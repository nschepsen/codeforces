#include <iostream>

/*
 * Contest: Code Forces Round #296 (Task 527-A)
 * URL: http://codeforces.ru/contest/527/problem/A
 */

inline long long solve(long long a, long long b)
{
    long long r = a / b;

    if((a % b) == 0)
    {
        return  r;
    }
    else
    {
        return r + solve(b, a - r * b);
    }
}

int main(int argc, char** argv)
{
    long long a, b;

    std::cin >> a >> b; std::cout << solve(a, b) << std::endl;

    return 0;
}
