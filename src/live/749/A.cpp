#include <iostream>

/*
 * Author: nschepsen <git@schepsen.eu>
 * ID: Codeforces Round #388 (Div. 2)
 * Task: Bachgold Problem
 * URL: http://codeforces.ru/contest/749/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, len; std::cin >> n;

    std::cout << (len = (n >> 1)) << std::endl;

    if(n & 1)
    {
        std::cout << "3 ";
    }
    else
    {
        std::cout << "2 ";
    }

    for(size_t i = 0; i < len - 1; ++i)
    {
        std::cout << "2" << ((i < len - 2) ? ' ' : '\n');
    }

    return EXIT_SUCCESS;
}
