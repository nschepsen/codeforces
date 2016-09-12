#include <iostream>
#include <string>
#include <unordered_map>

/*
 * Contest: Code Forces Round #284 (Task 499-B)
 * URL: http://codeforces.ru/contest/499/problem/B
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, m; std::cin >> n >> m;

    std::string f, s, word;

    std::unordered_map<std::string, std::string> dict;

    for (int i = 0; i < m; ++i)
    {
        std::cin >> f >> s;

        dict[f] = (f.length() <= s.length()) ? f : s;
    }

    for (int i = 0; i < n; ++i)
    {
        std::cin >> word;

        std::cout << dict[word] << (i < n - 1 ? " " : "\n");
    }

    return 0;
}
