#include <iostream>

/*
 * Contest: Code Forces Round #280 (Task 492-A)
 * URL: http://codeforces.ru/contest/492/problem/A
 */

int main(int argc, char** argv)
{
    int n, h = 0, c = 0; std::cin >> n;

    while (c <= n)
    {
        h++; c += ((h * (h + 1)) / 2);
    }

    std::cout << (h - 1) << std::endl;
    return 0;
}
