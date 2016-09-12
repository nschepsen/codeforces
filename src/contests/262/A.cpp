#include <iostream>

/*
 * Contest: Code Forces Round #160 (Task 262-A)
 * URL: http://codeforces.ru/contest/262/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, k, c = 0, answer = 0;

    std::cin >> n >> k;

    for (int i = 0, x, r; i < n; ++i, c = 0)
    {
        std::cin >> x;

        while(x > 0)
        {
            if(((r = (x % 10)) == 4) || (r == 7)) c++; x /= 10;
        }

        if(c <= k) answer++;
    }

    std::cout << answer << std::endl; return 0;
}
