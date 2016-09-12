#include <iostream>
#include <string>

/*
 * Contest: Codeforces Round #300 (Task 538-A)
 * URL: http://codeforces.ru/contest/538/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    std::string s; std::cin >> s;

    for (int i = 0; i < s.length(); ++i)
    {
        for (int j = i + 1; j <= s.length(); ++j)
        {
            if ("CODEFORCES" == (s.substr(0, i) + s.substr(j, s.length() - j)))
            {
                std::cout << "YES" << std::endl; return 0;
            }
        }
    }

    std::cout << "NO" << std::endl; return 0;
}
