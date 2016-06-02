#include <iostream>

/*
 * Contest: Code Forces Round #341 (Task 621-A)
 * URL: http://codeforces.ru/contest/621/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    long long n, min = 999999999, sum = 0;

    std::cin >> n;

    for (int i = 0, x; i < n; ++i)
    {
        std::cin >> x;

        sum += x;

        if((x & 1) && (x < min)) min = x;
    }

    std::cout << ((sum & 1) ? sum - min : sum) << std::endl;

    return 0;
}
