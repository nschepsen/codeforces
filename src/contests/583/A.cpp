#include <cstdio>
#include <set>
#include <vector>

/*
 * Contest: Code Forces Round #323 (Task 583-A)
 * URL: http://codeforces.ru/contest/583/problem/A
 */

int main(int argc, char** argv)
{
    int n; scanf("%d", &n);

    std::set<int> a, b;
    std::vector<int> v;

    for (int i = 1, x, y; i <= n * n; ++i)
    {
        scanf("%d%d", &x, &y);

        if (!a.count(x) && !b.count(y))
        {
            a.insert(x);
            b.insert(y);

            v.push_back(i);
        }
    }

    for (int i = 0; i < v.size(); ++i)
    {
        printf("%d%c", v[i], (i != v.size() - 1) ? ' ' : '\n');
    }

    return 0;
}
