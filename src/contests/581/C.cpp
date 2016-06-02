#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Contest: Code Forces Round #322 (Task 581-C)
 * URL: http://codeforces.ru/contest/581/problem/C
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, k, ans = 0; std::cin >> n >> k;

    std::vector<int> v(n);

    std::vector<std::pair<int, int> > r;

    for (int i = 0; i < n; ++i)
    {
        std::cin >> v[i];

        r.push_back(std::make_pair((10 - (v[i] % 10)), i));
    }

    std::sort(r.begin(), r.end());

    for (int i = 0; i < n; ++i)
    {
        if (((k - r[i].first) >= 0) && (v[r[i].second] < 100))
        {
            k -= r[i].first;

            v[r[i].second] += r[i].first;
        }
    }

    for (int i = 0, min; i < n; ++i)
    {
        if ((k > 0) && (v[r[i].second] < 100))
        {
            min = std::min(k, 100 - v[r[i].second]);

            k -= min;

            v[r[i].second] += min;
        }
    }

    for (int i = 0; i < n; ++i) { ans += (v[i] / 10); }

    std::cout << ans << std::endl; return 0;
}
