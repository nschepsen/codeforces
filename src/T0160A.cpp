#include <iostream>
#include <string>

#include <algorithm>

/*
 * Contest: Code Forces Round #111 (Task 160-A)
 * URL: http://codeforces.ru/contest/160/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    int n, sum = 0, c = 0;
    std::cin >> n;

    std::vector<int> coins(n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> coins[i]; sum += coins[i];
    }

    std::sort(coins.begin(), coins.end(), std::greater<int>());

    for (int i = 0; i < coins.size(); ++i)
    {
        if ((c += coins[i]) > (sum -= coins[i]))
        {
            std::cout << (i + 1) << std::endl; break;
        }
    }
    return 0;
}
