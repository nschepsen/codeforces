#include <iostream>
#include <vector>
#include <numeric>

/*
 * Contest: Code Forces Round #266 (Task 466-C)
 * URL: http://codeforces.ru/contest/466/problem/C
 */

// TODO: unsolved

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    long long n, sum = 0, ans = 0, p;

    std::cin >> n;

    std::vector<int> v(n), dp(n, 0);

    for (int i = 0; i < n; ++i)
    {
       std::cin >> v[i]; sum += v[i];
    }

    if(((p = (sum / 3)) * 3) == sum)
    {
        for (int i = 0, part = 0; i < n - 2; ++i)
        {
            if(((part += v[i])) == p) { dp[i] = 1; }
        }

        for (int i = 0; i < n - 1; ++i)
        {
            if(dp[i] == 1)
            {
                for (int j = i + 1, c = 0; j < n - 1; ++j) if(((c += v[j]) * 3) == sum) ans++;

            }
        }
    }

    std::cout << ans << std::endl; return 0;
}
