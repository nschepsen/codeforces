#include <iostream>

/*
 * Contest: Code Forces Round #164 (Task 268-B)
 * URL: http://codeforces.ru/contest/268/problem/B
 */

int main(int argc, char** argv)
{
    int n, sum = 0; std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        sum += ((n-i) * i);
    }

    std::cout << (sum + n) << std::endl;
    return 0;
}

