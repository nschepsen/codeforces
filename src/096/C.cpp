#include <iostream>

#include <string>
#include <vector>

/*
 * Contest: Code Forces Round #77 (Task 096-C)
 * URL: http://codeforces.ru/contest/96/problem/C
 */

#define check(orig, ch) (orig == ch) ? ((orig != 'a') ? 'a' : 'b') : ch

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    std::string team, lc, ans;
    char ch;

    int n, found, pos = 0;
    std::cin >> n;

    std::vector<std::string> v(n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> v[i];
        for (auto& ss : v[i]) ss = std::tolower(ss);
    }

    std::cin >> team >> ch; lc = team; ans = team;

    for (auto& c : lc) c = std::tolower(c);
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        while ((found = lc.find(*it, pos++)) != std::string::npos)
        {
            for (int i = found; i < found + (*it).size(); ++i)
            {
                char r = check(lc[i], ch);
                ans[i] = std::isupper(team[i]) ? std::toupper(r) : std::tolower(r);
            }
        }
        pos = 0;
    }

    std::cout << ans << std::endl;
    return 0;
}
