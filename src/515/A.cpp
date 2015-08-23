#include <iostream>
#include <cmath>
#include <string>

/*
 * Contest: Code Forces Round #292 (Task 515-A)
 * URL: http://codeforces.ru/contest/515/problem/A
 */

int main(int argc, char** argv)
{
    int a, b, s, t; std::cin >> a >> b >> s;

    std::string answer = "No";

    if ((t = std::abs(a) + std::abs(b) - s) <= 0)
    {
        answer = ((t & 1) ? "No" : "Yes");
    }

    std::cout << answer << std::endl; return 0;
}
