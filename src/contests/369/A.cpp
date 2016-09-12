#include <iostream>

/*
 * Contest: Code Forces Round #216 (Task 369-A)
 * URL: http://codeforces.ru/contest/369/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, m, k; std::cin >> n >> m >> k;

    int answer = 0;

    for (int i = 0, x; i < n; ++i)
    {
        std::cin >> x;

        if(x == 1)
        {
            if(m > 0) --m; else answer++;
        }
        else
        {
            if(k > 0) --k; else { if(m > 0) --m; else answer++; }
        }
    }

    std::cout << answer << std::endl; return 0;
}
