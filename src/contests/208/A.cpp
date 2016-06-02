#include <iostream>
#include <string>

/*
 * Contest: Code Forces Round #130 (Task 208-A)
 * URL: http://codeforces.ru/contest/208/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);
    std::string s; int pos = 0;

    std::cin >> s;

    while (s.find("WUB") != std::string::npos)
    {
        s.replace(s.find("WUB"), pos + 3, " ");
    }

    std::cout << s << std::endl;
    return 0;
}
