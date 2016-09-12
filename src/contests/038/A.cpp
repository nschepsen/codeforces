#include <iostream>
#include <vector>

/*
 * Contest: Code Forces Round #38 (Task 038-A)
 * URL: http://codeforces.ru/contest/038/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, a, b, answer = 0;

    std::cin >> n;

    std::vector<int> v(n);

    for (int i = 1; i < n; ++i) { std::cin >> v[i]; }

    std::cin >> a >> b;

    for (int i = a; i < b; ++i)
    {
        answer += v[i];
    }

    std::cout << answer << std::endl; return 0;
}
