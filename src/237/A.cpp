#include <iostream>

/*
 * Contest: Code Forces Round #147 (Task 237-A)
 * URL: http://codeforces.ru/contest/237/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);
    int n, cashes = 1; std::cin >> n;

    for (int i = 0, h, m, hl = -1, ml = -1, c = 1; i < n; ++i)
    {
        std::cin >> h >> m;

        if ((h == hl) && (m == ml))
        {
            c++;
        }
        else
        {
            c = 1;
        }

        if (c > cashes)
        {
            cashes = c;
        }

        hl = h; ml = m;
    }

    std::cout << cashes << std::endl; return 0;
}
