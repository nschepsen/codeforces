#include <iostream>

/*
 * Contest: Code Forces Round #188 (Task 318-A)
 * URL: http://codeforces.ru/contest/318/problem/A
 */

int main(int argc, char** argv)
{
    long long n, k, mid, r; std::cin >> n >> k;

    mid = (n >> 1) + ((!(n & 1)) ? 0 : 1);

    if (k <= mid)
    {
        r = k * 2 - 1;
    }
    else
    {
        r = (k - mid) * 2;
    }

    std::cout << r << std::endl; return 0;
}
