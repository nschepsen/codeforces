#include <iostream>
#include <vector>

/*
 * Contest: Code Forces Round #226 (Task 385-A)
 * URL: http://codeforces.ru/contest/385/problem/A
 */

int main(int argc, char** argv)
{
    int n, c, answer = 0; std::cin >> n >> c ;

    std::vector<int> v(n);

    for (int i = 0; i < n; ++i) { std::cin >> v[i]; }

    for (int i = 0; i < n - 1; ++i)
    {
        answer = std::max(answer, v[i] - v[i + 1] - c);
    }

    std::cout << answer << std::endl;

    return 0;
}
