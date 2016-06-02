#include <iostream>

/*
 * Contest: Code Forces Round #298 (Task 534-A)
 * URL: http://codeforces.ru/contest/534/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n; std::cin >> n;

    switch (n)
    {
    case 2:

        std::cout <<  "1\n1";  break;

    case 3:

        std::cout << "2\n1 3"; break;

    default:

        std::cout << n << std::endl;

        for (int i = 2; i <= n; i += 2) { std::cout << i << " "; }
        for (int i = 1; i <= n; i += 2) { std::cout << i << " "; }

        break;
    }

    std::cout << std::endl; return 0;
}
