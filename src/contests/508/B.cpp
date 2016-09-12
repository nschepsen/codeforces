#include <iostream>
#include <string>

/*
 * Contest: Code Forces Round #288 (Task 508-B)
 * URL: http://codeforces.ru/contest/508/problem/B
 */

//TODO: reimplement


#define toInt(x) x - '0'

int main(int argc, char** argv)
{
    std::string s, answer = "-1"; std::cin >> s;

    for (int i = 0; i < s.length(); ++i)
    {
        if(!(toInt(s[i]) & 1)) break;

        if(i == s.length() - 1)
        {
            std::cout << -1 << std::endl; return 0;
        }
    }

    if(toInt(s[s.length() - 1]) & 1)
    {
        for (int i = 0; i < s.length(); ++i)
        {
            if(!(toInt(s[i]) & 1) && s[i] < s[s.length() - 1]) { std::swap(s[i], s[s.length() - 1]); std::cout << s << std::endl; return 0; }
        }

        for (int i = s.length() - 1; i >= 0 ; --i)
        {
            if(!(toInt(s[i]) & 1)) { std::swap(s[i], s[s.length() - 1]); std::cout << s << std::endl; return 0; }
        }
    }

    std::cout << s << std::endl; return 0;
}
