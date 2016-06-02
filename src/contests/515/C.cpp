#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

/*
 * Contest: Code Forces Round #292 (Task 515-C)
 * URL: http://codeforces.ru/contest/515/problem/C
 */

int main(int argc, char** argv)
{
    std::vector<std::string> muster = { "", "", "2", "3", "322", "5", "53", "7", "7222", "7332" };

    int n; std::cin >> n;
    std::vector<char> v(n);

    std::string ans = "";

    for (int i = 0; i < n; ++i) { std::cin >> v[i]; }

    for (int i = 0; i < n; ++i)
    {
        ans += muster[v[i] - '0'];
    }

    std::sort(ans.begin(), ans.end(), std::greater<char>());

    std::cout << ans << std::endl; return 0;
}
