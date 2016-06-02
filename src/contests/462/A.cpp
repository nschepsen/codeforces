#include <iostream>
#include <vector>

/*
 * Contest: Code Forces Round #263 (Task 462-A)
 * URL: http://codeforces.ru/contest/462/problem/A
 */

int main(int argc, char** argv)
{
    int n; char ch;std::cin >> n;

    std::vector<std::vector<int> > v(n, std::vector<int>(n, 0));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            std::cin >> ch;

            if (ch == 'o')
            {
                if (i - 1 >= 0)
                {
                    v[i - 1][j]++;
                }

                if (i + 1 < n)
                {
                    v[i + 1][j]++;
                }

                if (j - 1 >= 0)
                {
                    v[i][j - 1]++;
                }

                if (j + 1 < n)
                {
                    v[i][j + 1]++;
                }
            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (v[i][j] & 1)
            {
                std::cout << "NO" << std::endl;

                return 0;
            }
        }
    }

    std::cout << "YES" << std::endl; return 0;
}
