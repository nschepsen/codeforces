#include <iostream>
#include <vector>

/*
 * Contest: Code Forces Round #317 (Task 572-A)
 * URL: http://codeforces.ru/contest/572/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    int na, nb, k, m; std::cin >> na >> nb >> k >> m;

    std::vector<int> a(na), b(nb);

    for (int i = 0; i < na; ++i)
    {
        std::cin >> a[i];
    }

    for (int i = 0; i < nb; ++i)
    {
        std::cin >> b[i];
    }

    std::cout << ((a[k - 1] < b[nb - m]) ? "YES" : "NO") << std::endl;
    return 0;
}
