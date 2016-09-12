#include <iostream>
#include <string>

/*
 * Contest: Code Forces Round #189 (Task 320-A)
 * URL: http://codeforces.ru/contest/320/problem/A
 */

int main(int argc, char** argv)
{
    std::string s, answer = "YES"; std::cin >> s;

    for (int i = 0; i < s.length();)
    {
        if(s.substr(i, 3) == "144")
        {
            i += 3;
        }
        else if(s.substr(i, 2) == "14")
        {
            i += 2;
        }
        else if(s[i] == '1')
        {
            i += 1;
        }
        else
        {
            answer = "NO"; break;
        }

        if(i == s.length()) { break; }
    }

    std::cout << answer << std::endl; return 0;
}
