#include <iostream>

/*
 * Contest: Code Forces Round #332 (Task 599-A)
 * URL: http://codeforces.ru/contest/599/problem/A
 */

#define min(a, b, c, d) std::min(a, std::min(b, std::min(c, d)))

int main(int argc, char** argv)
{
    int a, b, c; std::cin >> a >> b >> c;

    std::cout << min(a + b + c, 2 * (a + b), 2 * (a + c), 2 * (b + c)) << std::endl;

    return 0;
}
