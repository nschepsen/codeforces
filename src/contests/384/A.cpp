#include <iostream>

/*
 * Contest: Code Forces Round #225 (Task 384-A)
 * URL: http://codeforces.ru/contest/384/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n; std::cin >> n;

    std::cout << (n * n + 1) / 2 << std::endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; ++j)
        {
            if(((i & 1) && (j & 1)) || (!(i & 1) && !(j & 1)))
            {
                std::cout << "C";
            }
            else
            {
                std::cout << ".";
            }

            if(j == n - 1) std::cout << std::endl;
        }
    }

    return 0;
}
