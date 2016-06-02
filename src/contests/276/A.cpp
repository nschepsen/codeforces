#include <iostream>
#include <limits>

/*
 * Contest: Code Forces Round #169 (Task 276-A)
 * URL: http://codeforces.ru/contest/276/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, k, ans = std::numeric_limits<int>::min();

    std::cin >> n >> k;

    for (int i = 0, f, t; i < n; ++i)
    {
        std::cin >> f >> t;

        ans = std::max(ans, (t > k) ? f - (t - k) : f);
    }

    std::cout << ans << std::endl; return 0;
}
