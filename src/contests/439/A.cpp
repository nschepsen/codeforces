#include <iostream>

/*
 * Contest: Code Forces Round #251 (Task 439-A)
 * URL: http://codeforces.ru/contest/439/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    int n, d; std::cin >> n >> d;

    for (int i = 0, t; i < n; ++i)
    {
        std::cin >> t; d -= t;
    }

    std::cout << ((d >= ((n - 1) * 10)) ? d / 5 : - 1) << std::endl;

    return 0;
}
