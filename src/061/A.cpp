#include <iostream>
#include <string>

/*
 * Contest: Code Forces Round #57 (Task 061-A)
 * URL: http://codeforces.ru/contest/61/problem/A
 */

int main(int argc, char** argv)
{
    std::string a, b; std::cin >> a >> b;

    for (int i = 0; i < a.length(); ++i)
    {
        a[i] = (a[i] == b[i]) ? '0' : '1';
    }

    std::cout << a << std::endl;
    return 0;
}
