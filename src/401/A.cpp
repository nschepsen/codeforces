#include <iostream>
#include <cmath>

/*
 * Contest: Code Forces Round #235 (Task 401-A)
 * URL: http://codeforces.ru/contest/401/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    int n, sum = 0, m; std::cin >> n >> m;

    for (int i = 0, t = 0; i < n; ++i)
    {
        std::cin >> t; sum += t;
    }

    std::cout << (std::ceil((double) std::abs(sum) / m)) << std::endl;

    return 0;
}
