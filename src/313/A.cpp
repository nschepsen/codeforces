#include <iostream>

/*
 * Contest: Code Forces Round #186 (Task 313-A)
 * URL: http://codeforces.ru/contest/313/problem/A
 */

typedef long long ll;

ll max(ll a, ll b)
{
    return (a > b) ? a : b;
}

ll abs(ll a)
{
    return (a > 0) ? a : -a;
}

int main(int argc, char** argv)
{
    ll n, result;  std::cin >> n;

    result = max(max(n, n / 10), ((n / 100) * 10 - (abs(n) % 10)));

    std::cout << result << std::endl;
    return 0;
}
