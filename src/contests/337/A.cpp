#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Contest: Code Forces Round #196 (Task 337-A)
 * URL: http://codeforces.ru/contest/337/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);
    int n, m, min = 1000; std::cin >> n >> m;

    std::vector<int> v(m);

    for (int i = 0; i < m; ++i)
    {
        std::cin >> v[i];
    }

    std::sort(v.begin(), v.end());

    for (int i = 0; i <= m - n; ++i)
    {
        if ((v[i + n - 1] - v[i]) < min) min = v[i + n - 1] - v[i];
    }

    std::cout << min << std::endl;
    return 0;
}
