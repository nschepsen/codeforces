#include <iostream>

/*
 * Contest: Code Forces Round #377 (Task 732-C)
 * URL: http://codeforces.ru/contest/732/problem/C
 */

int main(int argc, char** argv)
{
    long long b, d, s, max, answer = 0;

    std::cin >> b >> d >> s;

    if((b == d) && (d == s))
    {
        answer = 0;
    }
    else
    {
        max = std::max(std::max(b, d), s);

        long long x = max - b - 1;
        long long y = max - d - 1;
        long long z = max - s - 1;

        answer = std::max<long long>(0, x) + std::max<long long>(0, y) + std::max<long long>(0, z);
    }

    std::cout << answer << std::endl; return 0;
}
