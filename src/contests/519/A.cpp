#include <iostream>
#include <map>
#include <string>

/*
 * Contest: Code Forces Round #294 (Task 519-A)
 * URL: http://codeforces.ru/contest/519/problem/A
 */

int main(int argc, char** argv)
{
    std::map<char, int> m = { { 'q', 9 }, { 'r', 5 }, { 'b', 3 }, { 'n', 3 }, { 'p', 1 }, { 'k', 0 } };
    std::string s; int score = 0;

    for (int i = 0; i < 8; ++i)
    {
        std::cin >> s;

        for (auto it = s.begin(); it != s.end(); ++it)
        {
            if (*it != '.')
            {
                score += ((std::isupper(*it) ? 1 : -1) * m[std::tolower(*it)]);
            }
        }
    }

    std::cout << ((score > 0) ? "White" : ((score < 0) ? "Black" : "Draw")) << std::endl;
    return 0;
}
