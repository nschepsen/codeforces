#include <iostream>
#include <string>

/*
 * Contest: Good Bye 2015 (Task 611-A)
 * URL: http://codeforces.ru/contest/611/problem/A
 */

int main(int argc, char** argv)
{
    int n, candies; std::string s;

    std::cin >> n >> s >> s;

    if (s[0] == 'w')
    {
        candies = 52 + (1 * (n >= 5) && (n != 7));
    }
    else
    {
        candies = 12 - ((n == 31) ? 5 : (n == 30) ? 1 : 0);
    }

    std::cout << candies << std::endl;

    return 0;
}
