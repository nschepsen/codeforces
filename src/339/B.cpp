#include <iostream>

/*
 * Contest: Code Forces Round #197 (Task 339-B)
 * URL: http://codeforces.ru/contest/339/problem/B
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);
    long long n, m, c = 1, times = 0; std::cin >> n >> m;

    for (long long i = 0, t = 0; i < m; ++i)
    {
        std::cin >> t;

        if(c > t) { times++; } c = t;
    }

    std::cout << (n * times + (c - 1)) << std::endl;
    return 0;
}
