#include <iostream>
#include <vector>

/*
 * Contest: Code Forces Round #355 (Task 677-B)
 * URL: http://codeforces.ru/contest/677/problem/B
 */


int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    long long n, h, k, t = 0; std::cin >> n >> h >> k;

    std::vector<int> v(n);

    for (long long i = 0; i < n; ++i)
    {
        std::cin >> v[i];
    }

    long long i = 0, c = 0;

    while(i < n || c > 0)
    {
        while((i < n) && (c + v[i]) <= h) c += v[i++];

        if(c < k)
        {
            if(i < n) { if(c + v[i] > h) { c = 0; t++; } } else { c = 0; t++; }
        }
        else
        {
            t = t + (c / k); c = c % k;
        }
    }

    std::cout << t << std::endl; return 0;
}
