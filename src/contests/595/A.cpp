#include <iostream>

/*
 * Contest: Code Forces Round #330 (Task 595-A)
 * URL: http://codeforces.ru/contest/595/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);
    int n, m, answer = 0; std::cin >> n >> m;

    for (int i = 0; i < n; ++i)
    {
        for(int j = 0, x, y; j < m; ++j)
        {
            std::cin >> x >> y;

            if(x == 1 || y == 1) answer++;
        }
    }

    std::cout << answer << std::endl; return 0;
}
