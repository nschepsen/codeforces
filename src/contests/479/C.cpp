#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Contest: Code Forces Round #274 (Task 479-C)
 * URL: http://codeforces.ru/contest/479/problem/C
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, answer = 0; std::cin >> n;

    std::vector<std::pair<int, int> > v;

    for (int i = 0, a, b; i < n; ++i)
    {
        std::cin >> a >> b; v.push_back(std::make_pair(a, b));
    }

    std::sort(v.begin(), v.end());

    for (int i = 0; i < n; ++i)
    {
        answer = v[i].second >= answer ? v[i].second : v[i].first;
    }

    std::cout << answer << std::endl; return 0;
}
