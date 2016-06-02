#include <iostream>

/*
 * Contest: Code Forces Round #285 (Task 501-A)
 * URL: http://codeforces.ru/contest/501/problem/A
 */

#define points(p, t) std::max(3 * p / 10, p - (p / 250) * t)

int main(int argc, char** argv)
{
    int a, b, c, d, diff; std::cin >> a >> b >> c >> d;

    diff = points(a, c) - points(b, d);

    std::cout << ((diff > 0) ? "Misha" : ((diff < 0) ? "Vasya" : "Tie")) << std::endl;

    return 0;
}
