#include <iostream>
#include <vector>

/*
 * Contest: Good Bye 2014 (Task 500-A)
 * URL: http://codeforces.ru/contest/500/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    int n, t, room = 1; std::cin >> n >> t;
    std::vector<int> v(n, 0);

    for (int i = 1; i < n; ++i)
    {
        std::cin >> v[i];

        if (room == i && i < t) { room += v[i]; }
    }

    std::cout << ((room == t) ? "YES" : "NO") << std::endl;
    return 0;
}
