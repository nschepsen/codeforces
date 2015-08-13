#include <iostream>

/*
 * Contest: Rockethon 2015 (Task 513-A)
 * URL: http://codeforces.ru/contest/513/problem/A
 */

int main(int argc, char** argv)
{
    int n1, n2;

    std::cin >> n1 >> n2;

    std::cout << ((n1 > n2) ? "First" : "Second") << std::endl;

    return 0;
}
