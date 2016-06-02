#include <iostream>
#include <vector>

/*
 * Contest: Code Forces Round #107 (Task 151-A)
 * URL: http://codeforces.ru/contest/151/problem/A
 */

int main(int argc, char** argv)
{
    int n, k, l, c, d, p, nl, np;

    std::cin

        >> n
        >> k
        >> l
        >> c
        >> d
        >> p
        >> nl
        >> np;

    std::cout << std::min(k * l / nl, std::min(c * d, p / np)) / n << std::endl;

    return 0;
}
