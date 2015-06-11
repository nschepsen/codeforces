#include <iostream>

/*
 * Contest: Code Forces Round #267 (Task 467-A)
 * URL: http://codeforces.ru/contest/467/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, p, q, count = 0;
    std::cin >> n;

    while (n--)
    {
        std::cin >> p >> q; if (q - p >= 2) count++;
    }

    std::cout << count << std::endl;
    return 0;
}
