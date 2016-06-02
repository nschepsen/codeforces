#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>

/*
 * Contest: Code Forces Round #320 (Task 579-D)
 * URL: http://codeforces.ru/contest/579/problem/D
 */

int main(int argc, char** argv)
{
    //TODO: unsolved

    int n, k, x; scanf("%d%d%d", &n, &k, &x);

    std::vector<long long> v(n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%I64d", &v[i]);
    }

    long long mul = (long long) std::pow(x, k), tmp;

    std::vector<long long> ans(n);

    for (int i = 0; i < n; ++i)
    {
        tmp = v[i]; v[i] *= mul;

        long long max = 0;

        std::for_each(v.begin(), v.end(), [&](long long n){ max |= n;});

        v[i] = tmp; ans[i] = max;
    }

    printf("%lld\n", *std::max_element(ans.begin(), ans.end()));

    return 0;
}
