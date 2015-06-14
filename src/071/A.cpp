#include <iostream>
#include <string>

/*
 * Contest: Codeforces Round #65 (Task 071-A)
 * URL: http://codeforces.ru/contest/71/problem/A
 */

int main(int argc, char** argv)
{
    std::string s; int k;
    std::cin >> k;

    while (k--)
    {
        std::cin >> s;
        std::cout << ((s.length() <= 10) ? s : (s.front() + std::to_string(s.size() - 2) + s.back())) << std::endl;
    }

    return 0;
}
