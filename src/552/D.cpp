#include <iostream>
#include <vector>

/*
 * Contest: Code Forces Round #308 (Task 552-D)
 * URL: http://codeforces.ru/contest/552/problem/D
 */

#define X first
#define Y second

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    int n, c = +0;
    std::cin >> n;

    std::vector<std::pair<int, int> > v(n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> v[i].X >> v[i].Y;
    }

    if (n < 3)
    {
        std::cout << 0 << std::endl;
    }
    else
    {
        for (int i = 0; i < (n - 2); ++i)
        {
            for (int j = i + 1; j < (n - 1); ++j)
            {
                for (int k = j + 1; k < n; ++k)
                {
                    if ((((v[j].X - v[i].X) * (v[k].Y - v[i].Y) - (v[k].X - v[i].X) * (v[j].Y - v[i].Y))) != 0) c++;
                }
            }
        }
        std::cout << c << std::endl;
    }
    return 0;
}
