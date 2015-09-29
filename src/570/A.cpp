#include <iostream>
#include <map>
#include <algorithm>

/*
 * Contest: Code Forces Round #316 (Task 570-A)
 * URL: http://codeforces.ru/contest/570/problem/A
 */

bool cmp(const std::pair<int, int>& p1, const std::pair<int, int>& p2)
{
    return p1.second < p2.second;
}

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    int n, m; std::cin >> n >> m;

    std::map<int, int> votes, map;

    for (int i = 0; i < m; ++i)
    {
        for (int i = 1, v; i <= n; ++i)
        {
            std::cin >> map[i];
        }

        votes[std::max_element(map.begin(), map.end(), cmp)->first]++;

        map.clear();
    }

    std::cout << std::max_element(votes.begin(), votes.end(), cmp)->first << std::endl;

    return 0;
}
