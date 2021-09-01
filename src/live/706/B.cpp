#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Author: nschepsen <git@schepsen.eu>
 * ID: Codeforces Round #367 (Div. 2)
 * Task: Interesting drink
 * URL: http://codeforces.ru/contest/706/problem/B
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, d; std::cin >> n;

    std::vector<int> p(n);

    for(size_t i = 0; i < n; ++i)
    {
        std::cin >> p[i];
    }

    std::sort(p.begin(), p.end());

    std::cin >> d;

    for(size_t i = 0, c, v; i < d; ++i)
    {
        std::cin >> v; c = 0;

        while(v >= p[c] && c < n)
        {
            ++c;
        }
        std::cout << c << std::endl;
    }

    return EXIT_SUCCESS; /* ---------- */
}
