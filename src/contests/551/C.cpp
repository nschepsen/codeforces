#include <iostream>
#include <vector>

/*
 * Contest: Code Forces Round #307 (Task 551-C)
 * URL: http://codeforces.ru/contest/551/problem/C
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);
    int n, m, max = 0, t = 0, s = 0;
    std::cin >> n >> m;

    std::vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> v[i];
        max += (v[i] + 1);
        s += (v[i] - m);
    }


    std::cout << ((m < max) ? max : max / m) << std::endl;
    return 0;
}
