#include <iostream>

/*
 * Contest: Code Forces Round #105 (Task 148-A)
 * URL: http://codeforces.ru/contest/148/problem/A
 */

int main(int argc, char** argv)
{
    int k, l, m, n, d, count = 0;
    std::cin >> k >> l >> m >> n >> d;

    for (int i = 1; i <= d; ++i)
    {
        if ((i % k == 0) || (i % l == 0) || (i % m == 0) || (i % n == 0)) count++;
    }

    std::cout << count << std::endl;
    return 0;
}
