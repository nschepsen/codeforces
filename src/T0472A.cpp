#include <iostream>
#include <vector>

/*
 * Contest: Code Forces Round #270 (Task 472-A)
 * URL: http://codeforces.ru/contest/472/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    int n, a, b; std::cin >> n;
    std::vector<bool> sieve((n + 1), false);

    for (int i = 2; i < n; ++i)
    {
        if (! sieve[i])
        {
            for (int j = 2 * i; j < n; j += i) { sieve[j] = true; }
        }
    }

    for (int i = 4; i < n; ++i)
    {
        if (sieve[(b = i)] && sieve[(a = (n - i))]) break;
    }

    std::cout << a << " " << b << std::endl;
    return 0;
}
