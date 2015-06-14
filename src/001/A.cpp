#include <iostream>
#include <cmath>

/*
 * Contest: Codeforces Round #001 (Task 001-A)
 * URL: http://codeforces.ru/contest/001/problem/A
 */

int main(int argc, char** argv)
{
    double n, m, a;

    std::cin >> n >> m >> a;
    std::cout << static_cast<long long>(std::ceil(n / a) * std::ceil(m / a)) << std::endl;

    return 0;
}
