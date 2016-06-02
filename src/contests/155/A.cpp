#include <iostream>

/*
 * Contest: Code Forces Round #109 (Task 155-A)
 * URL: http://codeforces.ru/contest/155/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);
    int n, cnt = 0, min = 10001, max = -1;

    std::cin >> n >> min; max = min;

    for (int i = 1, j = 0; i < n; ++i)
    {
        std::cin >> j;

        if (j > max)
        {
            max = j; cnt++;
        }

        if (j < min)
        {
            min = j; cnt++;
        }
    }

    std::cout << cnt << std::endl; return 0;
}
