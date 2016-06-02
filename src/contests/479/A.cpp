#include <iostream>
#include <algorithm>

/*
 * Contest: Code Forces Round #273 (Task 478-A)
 * URL: http://codeforces.ru/contest/478/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);
    int a, b, c, max;

    std::cin >> a >> b >> c;

    max = std::max(std::max((a + b) * c, a *(b + c)), std::max(a * b * c, a + b + c));

    std::cout << max << std::endl;
    return 0;
}
