#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Contest: Code Forces Round #261 (Task 459-B)
 * URL: http://codeforces.ru/contest/459/problem/B
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);
    long long n, min = 1000000001, max = 0;

    std::cin >> n;

    std::vector<long long> v(n);

    for (long long i = 0, a; i < n; ++i)
    {
        std::cin >> a; v[i] = a;

        min = (min < a) ? min : a;
        max = (max > a) ? max : a;
    }

    long long s = std::count(v.begin(), v.end(), min);
    long long t = std::count(v.begin(), v.end(), max);

    std::cout << max - min << " " << ((min == max) ? s * (s - 1) / 2 : s * t) << std::endl;

    return 0;
}
