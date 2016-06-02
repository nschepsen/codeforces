#include <iostream>

/*
 * Contest: Code Forces Round #346 (Task 659-A)
 * URL: http://codeforces.ru/contest/659/problem/A
 */

#define c(a, b, mod) (a + b) % n + (n * ((a + b) < 0))

int main(int argc, char** argv)
{
    int n, a, b; std::cin >> n >> a >> b;

    std::cout << (c(a, b, n) == 0 ? n : c(a, b, n)) << std::endl;

    return 0;
}
