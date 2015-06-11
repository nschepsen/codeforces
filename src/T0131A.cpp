#include <iostream>
#include <string>

/*
 * Contest: Code Forces Round #95 (Task 131-A)
 * URL: http://codeforces.ru/contest/131/problem/A
 */

#define invert(x) std::islower(x) ? std::toupper(x) : std::tolower(x)

std::string solve(std::string& s)
{
    std::string c; c.push_back(invert(s[0]));

    for (auto it = s.begin() + 1; it != s.end(); ++it)
    {
        if (std::islower(*it))
        {
            return s;
        }
        c.push_back(std::tolower(*it));
    }

    return c;
}

int main(int argc, char** argv)
{
    std::string string;
    std::cin >> string;

    std::cout << solve(string) << std::endl;
    return 0;
}
