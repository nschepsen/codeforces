#include <iostream>

/*
 * Contest: Code Forces Round #90 (Task 119-A)
 * URL: http://codeforces.ru/contest/119/problem/A
 */

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);
    int a, b, n;

    std::cin >> a >> b >> n;

    while (1)
    {
        if((n -= gcd(a, n)) < 0) { std::cout << 1 << std::endl; break; }
        if((n -= gcd(b, n)) < 0) { std::cout << 0 << std::endl; break; }
    }

    return 0;
}
