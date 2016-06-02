#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Contest: Code Forces Round #216 (Task 472-B)
 * URL: http://codeforces.ru/contest/472/problem/B
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, k, ans = 0; std::cin >> n >> k;

    std::vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> v[i];
    }

    std::sort(v.begin(), v.end(), std::greater<int>());

    for (int i = 0; i < n; i += k)
    {
        ans += 2 * (v[i] - 1);
    }

    std::cout << ans << std::endl; return 0;
}
