#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

/*
 * Contest: Code Forces Round #310 (Task 556-B)
 * URL: http://codeforces.ru/contest/556/problem/B
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    int n; std::cin >> n;
    std::vector<int> v(n);

    std::set<int> min, max;

    for (int i = 0, a; i < n; ++i)
    {
        std::cin >> v[i];

        min.insert(std::min((a = std::abs(v[i] - i)), n - a));
        max.insert(std::max(a, n - a));
    }

    std::cout << (((min.size() == 1) || (max.size() == 1)) ? "YES" : "NO") << std::endl;
    return 0;
}

