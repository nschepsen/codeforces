#include <iostream>
#include <string>

/*
 * Contest: Code Forces Round #360 (Task 688-B)
 * URL: http://codeforces.ru/contest/688/problem/B
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    std::string s; std::cin >> s;

    s.append(s.rbegin(), s.rend());

    std::cout << s << std::endl; return 0;
}
