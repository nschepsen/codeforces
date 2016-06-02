#include <iostream>

/*
 * Contest: Good Bye 2013 (Task 379-A)
 * URL: http://codeforces.ru/contest/379/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);
    int a, b, hours = 0;

    std::cin >> a >> b; hours = a;

    while (a >= b)
    {
        hours += (a / b); a = (a % b) + (a / b);
    }

    std::cout << hours << std::endl;
    return 0;
}
