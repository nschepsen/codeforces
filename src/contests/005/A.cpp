#include <iostream>
#include <string>
#include <set>
#include <vector>

/*
 * Contest: Code Forces Beta Round #5 (Task 5-A)
 * URL: http://codeforces.ru/contest/5/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);
    int count = 0; std::string str;

    std::set<std::string> s;

    while(std::getline(std::cin, str))
    {
        switch (str[0])
        {
        case '+':
            s.insert(std::string(str.begin() + 1, str.end()));
            break;
        case '-':
            s.erase(std::string(str.begin() + 1, str.end()));
            break;
        default:
            count += (str.size() - str.find(':') - 1) * s.size();
            break;
        }
    }

    std::cout << count << std::endl; return 0;
}
