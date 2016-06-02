#include <iostream>
#include <vector>

/*
 * Contest: Russian Code Cup 2016 (Q2 Task A)
 * URL: http://codeforces.com/gym/101010/problem/A
 */

void solve(void);

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n; std::cin >> n;

    for (int i = 0; i < n; ++i) solve();

    return 0;
}

void solve(void)
{
    int n, q; char op; std::cin >> n >> q;

    std::vector<int> book(n + 1, 1);

    for (int i = 0, page; i < q; ++i)
    {
        std::cin >> op >> page;

        if(op == '-')
        {
            book[page] = 0; book[n - page + 1] = 0;
        }
        else
        {
            for (int p = 1, tmp = 0; p <= n; ++p)
            {
                if(book[p] && (++tmp == page)) { std::cout << p << std::endl; break; }
            }
        }
    }
}
