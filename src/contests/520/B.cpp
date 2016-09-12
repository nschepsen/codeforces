#include <iostream>

/*
 * Contest: Code Forces Round #295 (Task 520-B)
 * URL: http://codeforces.ru/contest/520/problem/B
 */

int main(int argc, char** argv)
{
    int n, m, answer = 0;

    std::cin >> n >> m;

    while (n < m)
    {
        if (m & 1)
        {
            m++;
        }
        else
        {
            m >>= 1;
        }

        answer++;
    }

    std::cout << answer + n - m << std::endl; return 0;
}
