#include <iostream>

/*
 * Contest: Code Forces Round #326 (Task 588-B)
 * URL: http://codeforces.ru/contest/588/problem/B
 */

int main(int argc, char** argv)
{
    long long n, ans = 1, x; std::cin >> n;

    x = n;

    for(long long i = 2; (i * i) <= n; ++i)
    {
        if(!(x % i))
        {
            ans *= i;

            while(!(x % i)) { x /= i; }
        }
    }

    if(x > 1) { ans *= x; }

    std::cout << ans << std::endl; return 0;
}
