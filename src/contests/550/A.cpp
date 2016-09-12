#include <iostream>
#include <string>

/*
 * Contest: Code Forces Round #306 (Task 550-A)
 * URL: http://codeforces.ru/contest/550/problem/A
 */

int main(int argc, char** argv)
{
    std::string s; std::string answer = "NO";

    std::cin >> s;

    for (int i = 0; i < s.length() - 1; ++i)
    {
        if (s[i] == 'A' && s[i + 1] == 'B')
        {
            for (int j = i + 2; j < s.length() - 1; ++j)
            {
                if (s[j] == 'B' && s[j + 1] == 'A') { answer = "YES"; break; }
            }

            break;
        }
    }

    for (int i = 0; i < s.length() - 1; ++i)
    {
        if (s[i] == 'B' && s[i + 1] == 'A')
        {
            for (int j = i + 2; j < s.length() - 1; ++j)
            {
                if (s[j] == 'A' && s[j + 1] == 'B') { answer = "YES"; break; }
            }

            break;
        }
    }

    std::cout << answer << std::endl; return 0;
}
