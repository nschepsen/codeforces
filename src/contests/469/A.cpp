#include <iostream>

#include <string>
#include <vector>

/*
 * Contest: Code Forces Round #268 (Task 469-A)
 * URL: http://codeforces.ru/contest/469/problem/A
 */

int main(int argc, char** argv)
{
    std::string answer = "I become the guy.";

    int n, x;

    std::cin >> n >> x; std::vector<int> v(n + 1, 0);

    for (int i = 0, j = 0; i < x; ++i)
    {
        std::cin >> j; v[j] = 1;
    }

    std::cin >> x;

    for (int i = 0, j = 0; i < x; ++i)
    {
        std::cin >> j; v[j] = 1;
    }

    for (int i = 0; i < n; ++i)
    {
        if (v[i + 1] == 0) { answer = "Oh, my keyboard!"; break; }
    }

    std::cout << answer << std::endl;
    return 0;
}
