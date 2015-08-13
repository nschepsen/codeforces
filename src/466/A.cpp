#include <iostream>

/*
 * Contest: Code Forces Round #266 (Task 466-A)
 * URL: http://codeforces.ru/contest/466/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);
    int n, m, a, b, price;

    std::cin >> n >> m >> a >> b;

    if (b <= (a * m))
    {
        price = (n / m) * b + std::min((n % m) * a, b);
    }
    else
    {
        price = n * a;
    }

    std::cout << price << std::endl;
    return 0;
}
