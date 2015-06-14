#include <iostream>

/*
 * Contest: Codeforces Round #4 (Task 004-A)
 * URL: http://codeforces.ru/contest/4/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    int w;
    std::cin >> w;

    std::cout << ((w > 2 && !(w & 1)) ? "YES" : "NO") << std::endl;
    return 0;
}
