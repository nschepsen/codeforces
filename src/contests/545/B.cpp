#include <iostream>
#include <string>

/*
 * Contest: Code Forces Round #303 (Task 545-B)
 * URL: http://codeforces.ru/contest/545/problem/B
 */

int main(int argc, char** argv)
{
    std::string s, t; std::cin >> s >> t;

    int distance = 0;

    std::string p(s);

    for (int i = 0; i < s.length(); ++i)
    {
        if(s[i] != t[i])
        {
            p[i] = ((++distance) & 1) ? s[i] : t[i];
        }
    }

    std::cout << ((distance & 1) ? "impossible" : p) << std::endl;

    return 0;
}
