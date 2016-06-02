#include <iostream>

/*
 * Contest: Code Forces Round #294 (Task 519-C)
 * URL: http://codeforces.ru/contest/519/problem/C
 */

int main(int argc, char** argv)
{
    int n, m; std::cin >> n >> m;

    int min = std::min(n, m);
    int max = std::max(n, m);

    if(min * 2 <= max)
    {
        std::cout << min << std::endl;
    }
    else
    {
        std::cout << ((m + n) / 3) << std::endl;
    }

    return 0;
}
