#include <iostream>
#include <set>
#include <string>

/*
 * Contest: Code Forces Round #253 (Task 443-A)
 * URL: http://codeforces.ru/contest/443/problem/A
 */

int main(int argc, char** argv)
{
    std::set<char> chars; std::string s;

    std::getline(std::cin, s);

    for (auto it = s.begin(); it != s.end(); ++it)
    {
        if(std::isalpha(*it))
        {
            chars.insert(*it);
        }
    }

    std::cout << chars.size() << std::endl;
    return 0;
}
