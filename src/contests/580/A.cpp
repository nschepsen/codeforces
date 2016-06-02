#include <cstdio>
#include <algorithm>

/*
 * Contest: Code Forces Round #321 (Task 580-A)
 * URL: http://codeforces.ru/contest/580/problem/A
 */

int main(int argc, char** argv)
{
    int n, ans = 1, last = 1000000001;

    scanf("%d", &n);

    for (int i = 0, x, max = 1; i < n; ++i, last = x)
    {
        scanf("%d", &x);

        ans = std::max(ans, (max = ((last <= x) ? ++max : 1)));
    }

    printf("%d\n", ans); return 0;
}
