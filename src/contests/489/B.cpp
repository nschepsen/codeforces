#include <iostream>
#include <limits>
#include <vector>
#include <algorithm>

/*
 * Contest: Code Forces Round #277.5 (Task 489-B)
 * URL: http://codeforces.ru/contest/489/problem/B
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, pairs = 0; std::cin >> n;

    std::vector<int> b(n);

    for (int i = 0; i < n; ++i) { std::cin >> b[i]; }

    std::sort(b.begin(), b.end());

    int m; std::cin >> m;

    std::vector<int> g(m);

    for (int i = 0; i < m; ++i) { std::cin >> g[i]; }

    std::sort(g.begin(), g.end());

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if(std::abs(b[i] - g[j]) <= 1)
            {
                pairs++; g[j] = std::numeric_limits<int>::max(); break;
            }
        }
    }

    std::cout << pairs << std::endl; return 0;
}
