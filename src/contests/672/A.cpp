#include <iostream>
#include <string>

/*
 * Contest: Code Forces Round #352 (Task 672-A)
 * URL: http://codeforces.ru/contest/672/problem/A
 */

int main(int argc, char** argv)
{
    int n, i = 0; std::cin >> n;

    std::string s = "";

    while(s.length() < n)
    {
        s.append(std::to_string(++i));
    }

    std::cout << s[n - 1] << std::endl; return 0;
}
