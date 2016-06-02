#include <iostream>
#include <cmath>
#include <string>

/*
 * Contest: Code Forces Round #310 (Task 556-A)
 * URL: http://codeforces.ru/contest/556/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    int len, count = 0;
    std::string s;

    std::cin >> len >> s;

    for (int i = 0; i < len; ++i)
    {
        if(s[i] == '0') count++;
    }

    std::cout << std::abs(len - 2 * count) << std::endl;
    return 0;
}
