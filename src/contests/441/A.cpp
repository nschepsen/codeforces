#include <cstdio>
#include <set>

/*
 * Contest: Code Forces Round #252 (Task 441-A)
 * URL: http://codeforces.ru/contest/441/problem/A
 */

int main(int argc, char** argv)
{
    int n, v; scanf("%d%d", &n, &v);

    std::set<int> ans;

    for (int i = 1, m; i <= n; ++i)
    {
        scanf("%d", &m);

        for (int j = 0, price; j < m; ++j)
        {
            scanf("%d", &price);

            if(price < v) ans.insert(i);
        }
    }

    printf("%d\n", (int) ans.size()); for(const auto&e : ans) { printf("%d ", e); } printf("\n");

    return 0;
}
