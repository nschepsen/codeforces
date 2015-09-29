#include <iostream>

/*
 * Contest: Code Forces Round #294 (Task 519-B)
 * URL: http://codeforces.ru/contest/519/problem/B
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);
    int n; std::cin >> n;

    long long a = 0, b = 0, c = 0;

    for (int i = 0, x; i < n - 0; ++i)
    {
        std::cin >> x; a += x;
    }

    for (int i = 0, x; i < n - 1; ++i)
    {
        std::cin >> x; b += x;
    }

    for (int i = 0, x; i < n - 2; ++i)
    {
        std::cin >> x; c += x;
    }

    std::cout << a - b << std::endl << b - c  << std::endl;

    return 0;
}
