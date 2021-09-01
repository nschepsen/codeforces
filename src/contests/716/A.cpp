#include <iostream>
#include <vector>

/*
 * Author: nschepsen <git@schepsen.eu>
 * ID: Codeforces Round #372 (Div. 2)
 * Task: Crazy Computer
 * URL: http://codeforces.ru/contest/716/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);
    int n, c, answer = 0, last = 0;

    std::cin >> n >> c;

    for(size_t i = 0, now; i < n; ++i)
    {
        std::cin >> now;

        answer = (now - last <= c) ? answer + 1 : 1; last = now;
    }

    std::cout << answer << std::endl; return 0;
}
