#include <iostream>

/*
 * Contest: Code Forces Round #326 (Task 588-A)
 * URL: http://codeforces.ru/contest/588/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, ans = 0, min = 100;

    std::cin >> n;

    for (int i = 0, a, p; i < n; ++i)
    {
        std::cin >> a >> p;

        ans += a * (min =(p < min ? p : min));
    }

    std::cout << ans << std::endl; return 0;
}
