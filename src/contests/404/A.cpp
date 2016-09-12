#include <iostream>
#include <vector>

/*
 * Contest: Code Forces Round #237 (Task 404-A)
 * URL: http://codeforces.ru/contest/404/problem/A
 */

#define NO std::cout << "NO" << std::endl; return 0

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n; std::cin >> n;

    std::string s;

    std::vector<std::string> v(n);

    for (int i = 0; i < n; ++i) { std::cin >> v[i]; }

    char X = v[0][0], O = v[0][1];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if((i == j) || (i == n - j - 1))
            {
                if(v[i][j] != X) { NO; }
            }
            else
            {
                if(v[i][j] != O) { NO; }
            }
        }
    }

    std::cout << ((X != O) ? "YES" : "NO") << std::endl; return 0;
}
