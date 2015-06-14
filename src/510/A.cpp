#include <iostream>

/*
 * Contest: Code Forces Round #290 (Task 510-A)
 * URL: http://codeforces.ru/contest/510/problem/A
 */

inline bool isLeft(int x)
{
    while (x > 3)
    {
        x -= 4;
    }

    return (x == 1) ? 0 : 1;
}

int main(int argc, char** argv)
{
    int n, m; std::cin >> n >> m;

    char ch;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (!(i & 1))
            {
                ch = '#';
            }
            else
            {
                ch = (isLeft(i) && (j == 0)) ? '#' : (!isLeft(i) && (j == (m - 1)) ? '#' : '.');
            }
            std::cout << ch;
        }
        std::cout << std::endl;
    }
    return 0;
}
