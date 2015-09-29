#include <iostream>

/*
 * Contest: Code Forces Round #246 (Task 432-A)
 * URL: http://codeforces.ru/contest/432/problem/A
 */

int main(int argc, char** argv)
{
    int n, k, cnt = 0; std::cin >> n >> k;

    for (int i = 0, a; i < n; ++i)
    {
        std::cin >> a;
        if(a + k <= 5) { cnt++; }
    }

    std::cout << cnt / 3 << std::endl; return 0;
}
