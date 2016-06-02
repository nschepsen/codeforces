#include <cstdio>
#include <vector>

/*
 * Contest: Code Forces Round #322 (Task 581-B)
 * URL: http://codeforces.ru/contest/581/problem/B
 */

int main(int argc, char** argv)
{
    int n; scanf("%d", &n);

    std::vector<int> v(n), ans(n, 0);

    for (int i = 0; i < n; ++i) { scanf("%d", &v[i]); }

    for (int i = n - 2, max = v.back(); i >= 0; --i)
    {
        if(v[i] <= max)
        {
            ans[i] = max - v[i] + 1;
        }
        else
        {
            max = v[i];
        }
    }

    for(int i = 0; i < n; ++i)
    {
        printf("%d%c", ans[i], (i != n - 1) ? ' ' : '\n');
    }

    return 0;
}
