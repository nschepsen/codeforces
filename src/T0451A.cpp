#include <iostream>
#include <algorithm>

/*
 * Contest: Code Forces Round #258 (Task 451-A)
 * URL: http://codeforces.ru/contest/451/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    int n, m; std::cin >> n >> m;

    std::cout << ((std::min(n, m) & 1) ? "Akshat" : "Malvika") << std::endl;
    return 0;
}
