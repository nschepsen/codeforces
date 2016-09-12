#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Contest: Code Forces Round #156 (Task 255-A)
 * URL: http://codeforces.ru/contest/255/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n; std::cin >> n;

    std::vector<int> v(3, 0);

    std::vector<std::string> s = { "chest", "biceps", "back" };

    for (int i = 1, x; i <= n; ++i)
    {
        std::cin >> x; v[(i - 1) % 3] += x;
    }

    std::cout << (s[std::max_element(v.begin(), v.end()) - v.begin()]) << std::endl;

    return 0;
}
