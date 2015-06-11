#include <iostream>

#include <string>
#include <algorithm>

/*
 * Contest: Code Forces Round #40 (Task 041-A)
 * URL: http://codeforces.ru/contest/41/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    std::string r, s;
    std::cin >> s >> r;

    std::reverse(r.begin(), r.end());

    std::cout << ((!s.compare(r)) ? "YES" : "NO") << std::endl;
    return 0;
}
