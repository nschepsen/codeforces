#include <iostream>
#include <string>

/*
 * Contest: Code Forces Round #54 (Task 058-A)
 * URL: http://codeforces.ru/contest/58/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    std::string s, msg = "hello";
    std::cin >> s;

    auto mit = msg.cbegin();

    for (auto it = s.begin(); it != s.end(); ++it)
    {
        if (*it == *mit) mit++;
    }

    std::cout << ((mit == msg.cend()) ? "YES" : "NO") << std::endl;
    return 0;
}
