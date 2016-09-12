#include <iostream>

/*
 * Contest: Educational Codeforces Round 13
 * URL: http://codeforces.ru/contest/678/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, k; std::cin >> n >> k;

    int r = n % k;

    std::cout << n + (r ? k - r : k) << std::endl;

    return 0;
}
