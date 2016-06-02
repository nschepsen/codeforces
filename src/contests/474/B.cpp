#include <iostream>
#include <vector>

/*
 * Contest: Code Forces Round #271 (Task 474-B)
 * URL: http://codeforces.ru/contest/474/problem/B
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    int n; std::cin >> n;

    std::vector<int> v(1000001);

    for (int i = 1, j = 1, x; i <= n; ++i)
    {
        std::cin >> x; x += j;

        while(j < x) { v[j++] = i; }
    }

    int m; std::cin >> m;

    for (int i = 0, x; i < m; ++i)
    {
        std::cin >> x;

        std::cout << v[x] << std::endl;
    }

    return 0;
}
