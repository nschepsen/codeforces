#include <iostream>
#include <cmath>

/*
 * Contest: Code Forces Round #272 (Task 476-A)
 * URL: http://codeforces.ru/contest/476/problem/A
 */

int main(int argc, char** argv)
{
    int n, m, min, answer; std::cin >> n >> m;

    min = std::ceil((double) n / 2);

    if((answer = (min + m - 1) / m * m) > n)
    {
        answer = -1 ;
    }

    std::cout << answer << std::endl; return 0;
}
