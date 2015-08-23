#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Contest: Code Forces Round #106 (Task 149-A)
 * URL: http://codeforces.ru/contest/149/problem/A
 */

int main(int argc, char** argv)
{
    int k, count = 0; std::cin >> k;
    std::vector<int> v(12, 0);

    for (int i = 0; i < 12; ++i)
    {
        std::cin >> v[i];
    }

    std::sort(v.begin(), v.end(), std::greater<int>());

    for (int i = 0, t = 0; i < 12; ++i)
    {
        if (t >= k) { break; }
        t += v[i]; count++;

        if (i == 11 && t < k) { count = -1; }
    }

    std::cout << count << std::endl; return 0;
}
