#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Contest: Code Forces Round #321 (Task 580-B)
 * URL: http://codeforces.ru/contest/580/problem/B
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, d; std::cin >> n >> d;

    std::vector<std::pair<int, int> > v(n);

    for (int i = 0, m, s; i < n; ++i)
    {
        std::cin >> m >> s;

        v[i] = std::make_pair(m, s);
    }

    std::sort(v.begin(), v.end());

    long long sum = v[0].second, ans = sum;

    for (int i = 1, min = 0; i < n; ++i)
    {
        if((v[i].first - v[min].first) < d)
        {
            sum += v[i].second;
        }
        else
        {
            while((v[i].first - v[++min].first) >= d){}

            sum = 0;

            for (int k = min; k <= i; ++k) sum += v[k].second;
        }

        ans = std::max(ans, sum);
    }

    std::cout << ans << std::endl; return 0;
}
