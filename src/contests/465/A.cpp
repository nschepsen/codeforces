#include <iostream>

/*
 * Contest: Code Forces Round #265 (Task 465-A)
 * URL: http://codeforces.ru/contest/465/problem/A
 */

int main(int argc, char** argv)
{
    int n, x = 0; char ch;

    std::cin >> n;

    while (std::cin >> ch && ch == '1')
    {
        x++;
    }

    std::cout << (x ? (x == n ? n : x + 1) : 1) << std::endl;

    return 0;
}
