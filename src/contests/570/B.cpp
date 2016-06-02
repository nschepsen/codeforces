#include <iostream>

/*
 * Contest: Code Forces Round #316 (Task 570-B)
 * URL: http://codeforces.ru/contest/570/problem/B
 */

int main(int argc, char** argv)
{
    int n, m, ans; std::cin >> n >> m;

    if (m > (n >> 1))
    {
        ans = m - 1;
    }
    else
    {
        ans = m + 1;
    }

    std::cout << ( n == 1 ? 1 : ans) << std::endl;

    return 0;
}
