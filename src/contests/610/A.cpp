#include <iostream>

/*
 * Contest: Code Forces Round #337 (Task 610-A)
 * URL: http://codeforces.ru/contest/610/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, answer = 0; std::cin >> n;

    if(!(n & 1))
    {
        answer = ((n >> 1) & 1) ? n >> 2 : (n >> 2) - 1;
    }

    std::cout << answer<< std::endl; return 0;
}
