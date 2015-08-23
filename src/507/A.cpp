#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Contest: Code Forces Round #287 (Task 507-A)
 * URL: http://codeforces.ru/contest/507/problem/A
 */

int main(int argc, char** argv)
{
    int n, k, cnt = 0; std::cin >> n >> k;

    std::vector<std::pair<int, int> > v(n);

    for (int i = 0, a; i < n; ++i)
    {
        std::cin >> a; v[i] = std::make_pair(a, i + 1);
    }

    std::sort(v.begin(), v.end());

    for (int i = 0, d = 0; i < n; ++i)
    {
        if((d += v[i].first) > k) { break; } cnt++;
    }

    std::cout << cnt << std::endl;

    for (int i = 0; i < cnt; ++i)
    {
        std::cout << v[i].second << " ";
    }

    std::cout << std::endl; return 0;
}
