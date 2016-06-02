#include <iostream>
#include <vector>

/*
 * Contest: Code Forces Round #25 (Task 025-A)
 * URL: http://codeforces.ru/contest/25/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);
    int n; std::cin >> n;

    std::vector<std::pair<int, int> > c(2, std::make_pair(0, 0));

    for (int i = 0, t = 0; i < n; ++i)
    {
        std::cin >> t;

        c[(t & 1)].first++;
        c[(t & 1)].second = i + 1;
    }

    std::cout << ((c[0].first > c[1].first) ? c[1].second : c[0].second) << std::endl;
    return 0;
}
