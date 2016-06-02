#include <iostream>
#include <string>

/*
 * Contest: Code Forces Round #77 (Task 096-A)
 * URL: http://codeforces.ru/contest/96/problem/A
 */

int main(int argc, char** argv)
{
    int length = 1;

    std::string s;
    std::cin >> s;

    for (auto it = s.begin(); it != s.end(); ++it)
    {
        if (*it == *(it + 1))
        {
            if ((++length) == 7) break;
        }
        else
        {
            length = 1;
        }
    }

    std::cout << ((length >= 7) ? "YES" : "NO") << std::endl;
    return 0;
}
