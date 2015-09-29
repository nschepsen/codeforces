#include <iostream>
#include <vector>

/*
 * Contest: Code Forces Round #267 (Task 467-B)
 * URL: http://codeforces.ru/contest/467/problem/B
 */

int main(int argc, char** argv)
{
    int n, m, k, me, ans = 0;

    std::cin >> n >> m >> k;
    std::vector<int> v(m);

    for (int i = 0; i < m; ++i) { std::cin >> v[i]; }

    std::cin >> me;

    for (int i = 0, dist; i < m; ++i, dist = 0)
    {
        unsigned ret = v[i] ^ me;

        while (ret != 0)
        {
            dist++; ret &= ret - 1;
        }

        if(dist <= k) { ans++; }
    }

    std::cout << ans << std::endl; return 0;
}
