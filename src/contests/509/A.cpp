#include <iostream>

/*
 * Contest: Code Forces Round #289 (Task 509-A)
 * URL: http://codeforces.ru/contest/509/problem/A
 */

template<typename T> inline T f(T n);
template<typename T> inline T binomial(T n, T k);

template<typename T> inline T f(T n)
{
    return (n == 1 || n == 0) ? 1 : f(n - 1) * n;
}

template<typename T> inline T binomial(T n, T k)
{
    return (f(n) / (f(k) * (f(n - k))));
}

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    long long n, max;

    std::cin >> n;

    std::cout << (binomial(2 * n - 2, n - 1)) << std::endl;
    return 0;
}
