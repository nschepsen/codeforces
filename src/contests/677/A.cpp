#include <iostream>

/*
 * Contest: Code Forces Round #355 (Task 677-A)
 * URL: http://codeforces.ru/contest/677/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, h, l = 0; std::cin >> n >> h;

    for (int i = 0, x; i < n; ++i)
    {
        std::cin >> x;
        l += (x > h ? 2 : 1);
    }

    std::cout << l << std::endl; return 0;
}
