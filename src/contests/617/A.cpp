#include <iostream>
#include <cmath>

/*
 * Contest: Code Forces Round #340 (Task 617-A)
 * URL: http://codeforces.ru/contest/617/problem/A
 */

int main(int argc, char** argv)
{
    double n;

    std::cin >> n;

    std::cout << std::ceil(n / 5) << std::endl;

    return 0;
}
