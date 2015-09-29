#include <iostream>

/*
 * Contest: Code Forces Round #322 (Task 581-A)
 * URL: http://codeforces.ru/contest/581/problem/A
 */

int main(int argc, char** argv)
{
    int a, b; std::cin >> a >> b;

    int days = std::min(a, b);
    int rest = std::max(a, b) - days;

    std::cout << days << " " << rest / 2 <<std::endl;

    return 0;
}
