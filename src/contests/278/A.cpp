#include <iostream>
#include <vector>

/*
 * Contest: Code Forces Round #170 (Task 278-A)
 * URL: http://codeforces.ru/contest/278/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, s, t, sum = 0, way = 0;

    std::cin >> n;

    std::vector<int> v(n + 1, 0);

    for (int i = 1; i <= n; ++i)
    {
        std::cin >> v[i]; sum += v[i];
    }

    std::cin >> s >> t;

    for (int i = std::min(s, t); i < std::max(s, t); ++i)
    {
        way += v[i];
    }

    std::cout << std::min(way, sum - way) << std::endl;

    return 0;
}
