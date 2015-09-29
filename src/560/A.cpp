#include <iostream>

/*
 * Contest: Code Forces Round #313 (Task 560-A)
 * URL: http://codeforces.ru/contest/560/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, ans = 1; std::cin >> n;

    for (int i = 0, x; i < n; ++i)
    {
        std::cin >> x;

        if(x == 1) { ans = -1; }
    }

    std::cout << ans << std::endl; return 0;
}
