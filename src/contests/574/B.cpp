#include <iostream>
#include <cmath>
#include <limits>
#include <vector>

/*
 * Contest: Code Forces Round #318 (Task 574-B)
 * URL: http://codeforces.ru/contest/574/problem/B
 */

struct Edge
{
public:
    int s, t;
    Edge(int s, int t) : s(s), t(t) { }
};

int main(int argc, char** argv)
{
    int n, m, max = std::numeric_limits<int>::max(), cnt = max;

    std::cin >> n >> m;

    std::vector<Edge> e;
    std::vector<int> l(n, 0);

    std::vector<std::vector<bool> > v(n, std::vector<bool>(n, false));

    for (int i = 0, a, b; i < m; ++i)
    {
        std::cin >> a >> b;
        e.push_back(Edge(--a, --b));

        l[a]++; l[b]++;

        v[a][b] = true; v[b][a] = true;
    }

    for(const auto& edge : e)
    {
        for (int i = 0; i < n; ++i)
        {
            if((edge.s != i) && (edge.t != i) && (v[edge.s][i] && v[edge.t][i]))
            {
                cnt = std::min(cnt, l[edge.s] + l[edge.t] + l[i]);
            }
        }
    }

    std::cout << ((cnt == max) ? -1 : cnt - 6) << std::endl; return 0;
}
