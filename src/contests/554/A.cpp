#include <iostream>
#include <string>

/*
 * Contest: Code Forces Round #309 (Task 554-A)
 * URL: http://codeforces.ru/contest/554/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    std::string s;
    std::cin >> s;

    std::cout << (((s.length() + 1) * 26) - s.length()) << std::endl;
    return 0;
}
