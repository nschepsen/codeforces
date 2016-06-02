#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Contest: Code Forces Round #263 (Task 461-A)
 * URL: http://codeforces.ru/contest/461/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    long long n, score = 0, sum = 0; std::cin >> n;
    std::vector<int> v(n);

    for (int i = 0; i < n; ++i) { std::cin >> v[i];  sum += v[i]; score += v[i]; }

    std::sort(v.begin(), v.end());

    for (int i = 0; i < n - 1; ++i)
    {
        score += sum; sum -= v[i];
    }

    std::cout << score << std::endl; return 0;
}
