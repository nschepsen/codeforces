#include <iostream>
#include <vector>

/*
 * Contest: Code Forces Beta Round #4 (Task 4-B)
 * URL: http://codeforces.ru/contest/4/problem/B
 */

int main(int argc, char** argv)
{
    std::vector<std::pair<int, int> > v;

    int n, sum, d; std::cin >> n >> sum;

    std::vector<int> ans(n, 0);

    for (int i = 0, a, b; i < n; ++i)
    {
        std::cin >> a >> b;

        v.push_back(std::make_pair(a, b));
    }

    for(int i = 0; i < n; ++i)
    {
        ans[i] = v[i].first; sum -= ans[i];
    }

    if(sum < 0) { std::cout << "NO" << std::endl; return 0; }

    for(int i = 0; i < n; ++i)
    {
        if(sum > 0)
        {
            d = std::min(sum, v[i].second - v[i].first);

            ans[i] += d; sum -= d;
        }
    }

    if(sum > 0) { std::cout << "NO" << std::endl; return 0; }

    std::cout << "YES" << std::endl;

    for(int i = 0; i < n; ++i)
    {
        std::cout << ans[i] << ((i != n - 1) ? " " : "\n");
    }

    return 0;
}
