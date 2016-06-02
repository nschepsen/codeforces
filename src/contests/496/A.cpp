#include <iostream>
#include <vector>

/*
 * Contest: Code Forces Round #283 (Task 496-A)
 * URL: http://codeforces.ru/contest/496/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, answer = 1000; std::cin >> n;
    std::vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> v[i];
    }

    for(int deleted = 1, level = 0; deleted < n - 1; ++deleted, level = 0)
    {
        for (int i = 1; i < n; ++i)
        {
            if(i == deleted) continue;
            level = std::max(v[i] - v[((i - 1) == deleted) ? i - 2 : i - 1], level);
        }

        answer = std::min(answer, level);
    }

    std::cout << answer << std::endl; return 0;
}
