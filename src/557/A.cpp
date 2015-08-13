#include <iostream>

/*
 * Contest: Code Forces Round #311 (Task 557-A)
 * URL: http://codeforces.ru/contest/557/problem/A
 */

int main(int argc, char** argv)
{
    int n, a, t, max1, b, max2, c, max3;

    std::cin >> n;

    std::cin >> a >> max1;
    std::cin >> b >> max2;
    std::cin >> c >> max3;

    n -= (a + b + c);

    a += (t = std::min(n, max1 - a));
    n = std::max(0, n - t);

    b += (t = std::min(n, max2 - b));
    n = std::max(0, n - t);

    c += (t = std::min(n, max3 - c));
    n = std::max(0, n - t);

    std::cout << a << " " << b << " " << c << std::endl;
    return 0;
}
