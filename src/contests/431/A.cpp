#include <iostream>
#include <vector>

/*
 * Contest: Code Forces Round #247 (Task 431-A)
 * URL: http://codeforces.ru/contest/431/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    std::vector<int> v(4);

    for (int i = 0; i < 4; ++i)
    {
        std::cin >> v[i];
    }

    std::string s; int sum = 0; std::cin >> s;

    for (auto it = s.begin(); it != s.end(); ++it)
    {
        sum += v[(*it) - '0' - 1];
    }

    std::cout << sum << std::endl; return 0;
}
