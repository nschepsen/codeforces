#include <iostream>
#include <string>

/*
 * Contest: Code Forces Round #200 (Task 344-A)
 * URL: http://codeforces.ru/contest/344/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);
    std::string s; char ch; int n, islands = 1;

    std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        std::cin >> s;

        if(s[0] == ch) { islands++; } ch = s[1];
    }

    std::cout << islands << std::endl;
    return 0;
}
