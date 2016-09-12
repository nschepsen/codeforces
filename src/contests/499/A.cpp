#include <iostream>

/*
 * Contest: Code Forces Round #284 (Task 499-A)
 * URL: http://codeforces.ru/contest/499/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, x, answer = 0;

    std::cin >> n >> x;

    for (int i = 0, l, r, last = 1; i < n; last = r + 1, ++i)
    {
        std::cin >> l >> r;

        answer +=  ((l - last) % x) + (r - l + 1);
    }

    std::cout << answer << std::endl; return 0;
}
