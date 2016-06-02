#include <iostream>

/*
 * Contest: CodeForces Beta Round #92 (Task 124-A)
 * URL: http://codeforces.ru/contest/124/problem/A
 */

int main(int argc, char** argv)
{
    int n, a, b; std::cin >> n >> a >> b;

    std::cout << std::min(n - a, b + 1) << std::endl;

    return 0;
}
