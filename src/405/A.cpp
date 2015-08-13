#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Contest: Code Forces Round #238 (Task 405-A)
 * URL: http://codeforces.ru/contest/405/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    int n; std::cin >> n;
    std::vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> v[i];
    }

    std::sort(v.begin(), v.end(), std::less<int>());

    for (int i = 0; i < n; ++i)
    {
        std::cout << v[i] << " ";
    }

    std::cout << std::endl; return 0;
}
