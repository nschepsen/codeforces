#include <iostream>

/*
 * Contest: Code Forces Round #273 (Task 478-B)
 * URL: http://codeforces.ru/contest/478/problem/B
 */

template<typename T> T inline pairs(T x)
{
    return (x * (x - 1)) >> 1;
}

int main(int argc, char** argv)
{
    long long n, m, r, min, max;

    std::cin >> n >> m;

    min = pairs((n / m) + 1) * (r = (n % m)) + pairs(n / m) * (m - r);

    max = pairs(n - m + 1);

    std::cout << min << " " << max << std::endl;

    return 0;
}
