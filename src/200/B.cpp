#include <iostream>

/*
 * Contest: Code Forces Round #126 (Task 200-B)
 * URL: http://codeforces.ru/contest/200/problem/B
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    int n; std::cin >> n;

    double sum = 0;

    for (int i = 0, p; i < n; ++i)
    {
        std::cin >> p; sum += p;
    }

    std::cout << sum / n << std::endl;

    return 0;
}
