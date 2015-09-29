#include <iostream>

/*
 * Contest: Code Forces Round #319 (Task 577-A)
 * URL: http://codeforces.ru/contest/577/problem/A
 */

int main(int argc, char** argv)
{
    int n, x, count = 0;  std::cin >> n >> x;

    for (int i = 1; i <= n; ++i)
    {
        if (!(x % i) && ((x / i) <= n)) count++;
    }

    std::cout << count << std::endl; return 0;
}
