#include <iostream>
#include <cmath>
#include <string>

/*
 * Contest: Codeforces Round #301 (Task 540-A)
 * URL: http://codeforces.ru/contest/540/problem/A
 */

int main(int argc, char** argv)
{
    std::string a, b;

    int n, sum = 0;
    std::cin >> n >> a >> b;

    for (int i = 0; i < n; ++i)
    {
        sum += std::min(std::abs(a[i] - b[i]), 10 - std::abs(a[i] - b[i]));
    }

    std::cout << sum << std::endl;
    return 0;
}
