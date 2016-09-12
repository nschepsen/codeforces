#include <iostream>
#include <set>
#include <vector>

/*
 * Contest: Looksery Cup 2015 (Task 549-A)
 * URL: http://codeforces.ru/contest/549/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, m, answer = 0;

    std::cin >> n >> m;

    std::set<char> mask = {'f', 'a', 'c', 'e'}, frame;

    std::vector<std::vector<char> > v(n, std::vector<char>(m));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            std::cin >> v[i][j];
        }
    }

    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < m - 1; ++j)
        {
            frame.insert(v[i + 1][j]);
            frame.insert(v[i][j]);
            frame.insert(v[i][j + 1]);
            frame.insert(v[i + 1][j + 1]);

            if(frame == mask) answer++; frame.clear();
        }
    }

    std::cout << answer << std::endl; return 0;
}
