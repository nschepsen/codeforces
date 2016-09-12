#include <iostream>
#include <vector>

/*
 * Contest: Code Forces Round #343 (Task 629-A)
 * URL: http://codeforces.ru/contest/629/problem/A
 */

#define sum(n) (((n-1) * (n)) >> 1)

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, answer = 0; char ch;

    std::cin >> n;

    std::vector<std::vector<char> > v(n, std::vector<char>());

    std::vector<int> rows(n, 0), cols(n, 0);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            std::cin >> ch;

            if(ch == 'C') { cols[j]++; rows[i]++; }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        answer += sum(rows[i]) + sum(cols[i]);
    }

    std::cout << answer << std::endl; return 0;
}
