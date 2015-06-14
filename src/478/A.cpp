#include <iostream>

/*
 * Contest: Code Forces Round #273 (Task 478-A)
 * URL: http://codeforces.ru/contest/478/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);
    int c, sum = 0;

    for (int i = 0; i < 5; ++i)
    {
        std::cin >> c; sum += c;
    }

    std::cout << ((!(sum % 5) && sum) ? sum / 5 : -1) << std::endl;
    return 0;
}
