#include <iostream>

/*
 * Contest: Code Forces Round #353 (Task 675-A)
 * URL: http://codeforces.ru/contest/675/problem/A
 */

int main(int argc, char** argv)
{
    long long a, b, c; std::cin >> a >> b >> c;

    if (c != 0)
    {
        if (((b - a) % c == 0) && (c * (b - a) >= 0))
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }
    }
    else
    {
        std::cout << (a == b ? "YES" : "NO") << std::endl;
    }

    return 0;
}
