#include <iostream>
#include <string>

/*
 * Contest: CodeForces Beta Round #55 (Task 59-A)
 * URL: http://codeforces.ru/contest/59/problem/A
 */

int main(int argc, char** argv)
{
    std::string s; std::cin >> s;

    int c = 0;

    for (auto it = s.begin(); it != s.end(); ++it)
    {
        if(std::islower(*it)) c++;
    }

    for (auto it = s.begin(); it != s.end(); ++it)
    {
        *it = (2*c >= s.size()) ? std::tolower(*it) : std::toupper(*it);
    }

    std::cout << s << std::endl;
    return 0;
}
