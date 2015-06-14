#include <iostream>
#include <vector>

/*
 * Contest: Code Forces Round #164 (Task 268-A)
 * URL: http://codeforces.ru/contest/268/problem/A
 */

int main(int argc, char** argv)
{
    int n, a, b, result = 0; std::cin >> n;
    std::vector<int> home(n), guest(n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> home[i] >> guest[i];
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (home[i] == guest[j]) result++;
        }
    }

    std::cout << result << std::endl;
    return 0;
}
