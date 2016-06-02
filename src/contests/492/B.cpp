#include <cstdio>
#include <vector>
#include <algorithm>

/*
 * Contest: Code Forces Round #280 (Task 492-B)
 * URL: http://codeforces.ru/contest/492/problem/B
 */

#define max(a, b, c) std::max(a, std::max(b, c))

int main(int argc, char** argv)
{
    int n, l, dist = 0; scanf("%d%d", &n, &l);

    std::vector<double> v(n);

    for (int i = 0; i < n; ++i) { scanf("%lf", &v[i]); }

    std::sort(v.begin(), v.end());

    for(int i = 0, t; i < n - 1; ++i)
    {
        if((t = (v[i + 1] - v[i])) > dist)
        {
            dist = t;
        }
    }

    printf("%0.9lf\n", max(v[0], l - v.back(), dist * 0.5));

    return 0;
}
