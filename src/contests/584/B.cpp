#include <iostream>

/*
 * Contest: Code Forces Round #324 (Task 584-B)
 * URL: http://codeforces.ru/contest/584/problem/B
 */

#define MOD 1000000007

int main(int argc, char** argv)
{
    long long n, x = 1, y = 1; std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        x = (x * 27) % MOD;

        y = (y *  7) % MOD;
    }

    std::cout << ((x - y + MOD) % MOD) << std::endl;

    return 0;
}
