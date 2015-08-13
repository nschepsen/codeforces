#include <iostream>
#include <vector>
#include <cmath>

/*
 * Contest: Code Forces Round #314 (Task 567-A)
 * URL: http://codeforces.ru/contest/567/problem/A
 */

inline int dist(int ida, int idb, std::vector<int> & places)
{
     return std::abs(places[ida] - places[idb]);
}

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);
    int n; std::cin >> n;

    std::vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> v[i];
    }

    std::vector<std::pair<int, int> > prices(n);

    for (int i = 0; i < n; ++i)
    {
        prices[i].first = (i != 0) ? ((i != (n - 1)) ? std::min(dist(i - 1, i, v), dist(i + 1, i, v)) : dist(i - 1, i, v)) : dist(i + 1, i, v);
        prices[i].second = std::max(dist(0, i, v), dist(n - 1, i, v));
    }

    for (int i = 0; i < n; ++i)
    {
        std::cout << prices[i].first << " " << prices[i].second << std::endl;
    }

    return 0;
}
