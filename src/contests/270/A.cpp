#include <iostream>

/*
 * Contest: Code Forces Round #165 (Task 270-A)
 * URL: http://codeforces.ru/contest/270/problem/A
 */

int main(int argc, char** argv)
{
    int n, x; std::cin >> n;

    for (int i = 0, a = 0; i < n; ++i)
    {
        std::cin >> a;

        std::cout << ((360 % (180 - a)) ? "NO" : "YES") << std::endl;
    }

    return 0;
}
