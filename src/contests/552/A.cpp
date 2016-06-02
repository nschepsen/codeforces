#include <iostream>
#include <vector>

/*
 * Contest: Code Forces Round #308 (Task 552-A)
 * URL: http://codeforces.ru/contest/552/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    int n, sum = 0;
    std::cin >> n;

    std::vector<std::vector<int> > v(100, std::vector<int>(100, 0));

    for (int i = 0, a, b, c, d; i < n; ++i)
    {
        std::cin >> a >> b >> c >> d;

        for (int x = (a - 1); x < c; ++x)
        {
            for (int y = (b - 1); y < d; ++y)
            {
                v[x][y]++;
            }
        }
    }

    for (int i = 0; i < 100; ++i)
    {
        for (int j = 0; j < 100; ++j)
        {
            sum += v[i][j];
        }
    }

    std::cout << sum << std::endl; return 0;
}
