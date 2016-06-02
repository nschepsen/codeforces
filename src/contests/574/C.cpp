#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Contest: Code Forces Round #318 (Task 574-C)
 * URL: http://codeforces.ru/contest/574/problem/C
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    int n; std::cin >> n; std::vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> v[i];

        while (!(v[i] & 1) || ((v[i] % 3) == 0))
        {
            v[i] = (!(v[i] & 1)) ? v[i] >> 1 : v[i] /= 3;
        }
    }

    std::cout << ((std::count(v.begin(), v.end(), v[0]) == n) ? "Yes" : "No") << std::endl;

    return 0;
}
