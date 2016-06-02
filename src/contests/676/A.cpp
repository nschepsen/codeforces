#include <iostream>
#include <vector>

/*
 * Contest: Code Forces Round #354 (Task 676-A)
 * URL: http://codeforces.ru/contest/676/problem/A
 */

#define max(a, b, c, d) std::max(a, std::max(b, std::max(c, d)))

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, min, max; std::cin >> n;
    std::vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> v[i];

        if(v[i] == 1) min = i;
        if(v[i] == n) max = i;
    }

    std::cout << max(min, max, n - 1 - min, n - 1 - max) << std::endl;

    return 0;
}
