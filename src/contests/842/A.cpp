#include <iostream>
#include <string>

/*
 * Contest: Code Forces Round #430 (Task 842-A)
 * URL: http://codeforces.ru/contest/842/problem/A
 */

int main(int argc, char** argv)
{
    bool exists = false; long long l, r, x, y, k;

    std::cin >> l >> r >> x >> y >> k;

    for (long long i = x, p = i * k; i <= y; ++i, p = i * k)
    {
        if (p >= l && p <= r)
        {
            exists = !exists; break;
        }
    }

    std::cout << (exists ? "YES" : "NO") << std::endl;

    return 0;
}
