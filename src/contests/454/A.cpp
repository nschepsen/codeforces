#include <iostream>
#include <string>
#include <vector>

/*
 * Contest: Code Forces Round #259 (Task 454-A)
 * URL: http://codeforces.ru/contest/454/problem/A
 */

int main(int argc, char** argv)
{
    int n; std::cin >> n;
    int m = n / 2;

    std::vector<std::string> v(n, std::string(n, '*'));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if ((j >= ((m - ((i > m) ? 2 * m - i : i)))) && (j <= (m + ((i > m) ? 2 * m - i : i))))
            {
                v[i][j] = 'D';
            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        std::cout << v[i] << std::endl;
    }

    return 0;
}
