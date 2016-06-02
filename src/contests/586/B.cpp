#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

/*
 * Contest: Code Forces Round #325 (Task 586-B)
 * URL: http://codeforces.ru/contest/586/problem/B
 */

#define sum(v, from, to) std::accumulate(v.begin() + from, v.begin() + to, 0)

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, x; std::cin >> n;

    std::vector<int> a(n - 1, 0), b(n - 1, 0), c(n, 0), ans(n);

    for (int i = 0; i < (n - 1); ++i)
    {
        std::cin >> x; a[i] = x;
    }

    for (int i = 0; i < (n - 1); ++i)
    {
        std::cin >> x; b[i] = x;
    }

    for (int i = 0; i < n; ++i)
    {
        std::cin >> x; c[i] = x;
    }

    for (int i = 0; i < n; ++i)
    {
        ans[i] = sum(a, 0, i) + sum(b, i, n - 1) + c[i];
    }

    std::sort(ans.begin(), ans.end());
    std::cout << (ans[0] + ans[1]) << std::endl;

    return 0;
}
