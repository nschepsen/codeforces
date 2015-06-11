#include <iostream>

/*
 * Contest: Code Forces Round #277 (Task 486-A)
 * URL: http://codeforces.ru/contest/486/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    long long n, result;
    std::cin >> n;

    result = (n & 1) ? (-1 * ((n >> 1) + 1)) : (n >> 1);

    std::cout << result << std::endl;
    return 0;
}
