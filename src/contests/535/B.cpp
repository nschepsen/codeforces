#include <iostream>
#include <string>

/*
 * Contest: Code Forces Round #299 (Task 535-B)
 * URL: http://codeforces.ru/contest/535/problem/B
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    std::string s; std::cin >> s;

    int answer = 1;

    for (int i = 0; i < s.length(); ++i)
    {
        answer <<= 1;

        s[i] = (s[i] == '4') ? '0' : '1';
    }

    std::cout << std::stol(s, nullptr, 2) + answer - 1 << std::endl;

    return 0;
}
