#include <iostream>

/*
 * Contest: CodeForces Beta Round #89 (Task 118-B)
 * URL: http://codeforces.ru/contest/118/problem/B
 */

int main(int argc, char** argv)
{
    int n; std::cin >> n;

    for (int i = 0; i <= 2 * n; ++i)
    {
        int row = (2 * (n - ((i <= n) ? i : 2 * n - i)));

        for (int j = 0; j < row; ++j)
        {
            std::cout << " ";
        }

        int x = 0, col = 4 * ((i <= n) ? i : 2 * n - i);

        for (int j = 0; j <= col; ++j)
        {
            if (j & 1)
            {
                std::cout << " ";
            }
            else
            {
                std::cout << ((j < (col / 2)) ? x++ : x--);
            }
        }

        std::cout << std::endl;
    }

    return 0;
}
