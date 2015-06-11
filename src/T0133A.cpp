#include <iostream>
#include <string>

/*
 * Contest: Code Forces Round #96 (Task 133-A)
 * URL: http://codeforces.ru/contest/133/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);
    std::string s;

    std::cin >> s;

    for (auto it = s.begin(); it != s.end(); ++it)
    {
        switch (*it)
        {
        case 'H':
        case 'Q':
        case '9':
            std::cout << "YES" << std::endl; return 0;
        default:
            break;
        }
    }
    std::cout << "NO" << std::endl;
    return 0;
}
