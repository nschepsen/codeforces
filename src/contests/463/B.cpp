#include <iostream>
#include <vector>

/*
 * Contest: Code Forces Round #264 (Task 463-B)
 * URL: http://codeforces.ru/contest/463/problem/B
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, ans = 0, p = 0; std::cin >> n;

    std::vector<int> v(n + 1, 0);

    for (int i = 1, diff, r; i <= n; ++i)
    {
        std::cin >> v[i];

        if((diff = v[i - 1] - v[i]) >= 0)
        {
            p += diff;
        }
        else
        {
            p -= (r = std::min(p, -diff));

            diff  = -diff - r;

            if(diff > 0) { ans += diff; }
        }
    }

    std::cout << ans << std::endl; return 0;
}
