#include <iostream>

/*
 * Contest: Code Forces Round #262 (Task 460-A)
 * URL: http://codeforces.ru/contest/460/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    int n, m, d = 0;
    std::cin >> n >> m; d = n;

    while (n >= m)
    {
        d += (n / m);
        n = (n % m) + (n / m);
    }

    std::cout << d << std::endl;
    return 0;
}
