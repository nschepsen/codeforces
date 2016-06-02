#include <iostream>
#include <map>
#include <string>

/*
 * Contest: Code Forces Round #101 (Task 141-A)
 * URL: http://codeforces.ru/contest/141/problem/A
 */

int main(int argc, char** argv)
{
    std::string h, g, r; std::cin >> h >> g >> r;

    bool solvable = false; h += g;

    if (h.length() == r.length())
    {
        std::map<char, int> chars;

        solvable = true;

        for (int i = 0; i < h.length(); ++i)
        {
            chars[h[i]]++;
        }

        for (int i = 0; i < r.length(); ++i)
        {
            chars[r[i]]--;
        }

        for (auto it = chars.begin(); it != chars.end(); ++it)
        {
            if ((*it).second != 0)
            {
                solvable = false; break;
            }
        }
    }
    std::cout << (solvable ? "YES" : "NO") << std::endl;

    return 0;
}
