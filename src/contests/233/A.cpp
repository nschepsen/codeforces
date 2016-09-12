#include <iostream>

/*
 * Contest: Code Forces Round #144 (Task 233-A)
 * URL: http://codeforces.ru/contest/233/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n; std::cin >> n;

    if(n & 1)
    {
        std::cout << -1 << std::endl;
    }
    else
    {
        for (int i = 1; i <= n; i += 2)
        {
            std::cout << i + 1 << " " << i << ((i == n - 1) ? "\n" : " ");
        }
    }

    return 0;
}
