#include <iostream>
#include <string>

/*
 * Contest: Codeforces Round #300 (Task 538-A)
 * URL: http://codeforces.ru/contest/538/problem/A
 */

int main(int argc, char** argv)
{
    const std::string CF = "CODEFORCES";

    std::string s;
    std::cin >> s;

    for (unsigned i = 0; i < s.length(); ++i)
    {
        for (unsigned j = i + 1; j <= s.length(); ++j)
        {
            std::string sub = s.substr(0, i) + s.substr(j, s.length() - j);

            if (CF == sub)
            {
                std::cout << "YES" << std::endl;
                return 0;
            }
        }
    }

    std::cout << "NO" << std::endl;
    return 0;
}
