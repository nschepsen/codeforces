#include <iostream>
#include <vector>

/*
 * Contest: Code Forces Round #377 (Task 732-B)
 * URL: http://codeforces.ru/contest/732/problem/B
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, k, answer = 0;

    std::cin >> n >> k;

    std::vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
    	std::cin >> v[i];
    }

    for (int i = 0, x = 0; i < n - 1; ++i)
    {
        if ((x = k - v[i] - v[i + 1]) > 0)
        {
            answer += x;

            v[i + 1] += x;
        }
    }

    std::cout << answer << std::endl;

    for (int i = 0; i < n; ++i)
    {
        std::cout << v[i] << ((i == n - 1) ? "\n" : " ");
    }

    return 0;
}
