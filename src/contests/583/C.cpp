#include <cstdio>
#include <map>
#include <vector>

/*
 * Contest: Code Forces Round #323 (Task 583-C)
 * URL: http://codeforces.ru/contest/583/problem/C
 */

template<typename T> T gcd(T a, T b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main(int argc, char** argv)
{
    int n, k; scanf("%d", &n);

    std::vector<int> ans;
    std::map<int, int> v;

    for (int i = 0; i < n * n; ++i)
    {
        scanf("%d", &k); v[k]++;
    }

    for (auto it = v.rbegin(); it != v.rend(); ++it)
    {
        while (((*it).second--) > 0)
        {
            ans.push_back((*it).first);

            for (const auto& e : ans)
            {
                v[gcd(ans.back(), e)] -= 2;
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        printf("%d%c", ans[i], (i != n - 1) ? ' ' : '\n');
    }

    return 0;
}
