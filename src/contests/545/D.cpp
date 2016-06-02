#include <iostream>
#include <vector>

#include <algorithm>

/*
 * Contest: Code Forces Round #303 (Task 545-D)
 * URL: http://codeforces.ru/contest/545/problem/D
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    int n, waiting = 0, count = 0;
    std::cin >> n;
    std::vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> v[i];
    }

    std::sort(v.begin(), v.end());

    for (int i = 0; i < n; ++i)
    {
        if (waiting <= v[i])

        {
            waiting += v[i];
            count++;
        }
    }

    std::cout << count << std::endl;

    return 0;
}
