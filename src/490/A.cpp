#include <iostream>
#include <stack>
#include <vector>

/*
 * Contest: Code Forces Round #279 (Task 490-A)
 * URL: http://codeforces.ru/contest/490/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);
    std::vector<std::stack<int> > v(3, std::stack<int>());

    int n, teams = 0; std::cin >> n;

    for (int i = 1, t; i <= n; ++i)
    {
        std::cin >> t; v[t - 1].push(i);
    }

    teams = std::min(v[0].size(), std::min(v[1].size(), v[2].size()));

    std::cout << teams << std::endl;

    if (teams > 0)
    {
        while (!v[0].empty() && !v[1].empty() && !v[2].empty())
        {
            std::cout << v[0].top() << " ";
            std::cout << v[1].top() << " ";
            std::cout << v[2].top() << std::endl;

            v[0].pop(); v[1].pop(); v[2].pop();
        }
    }

    return 0;
}
