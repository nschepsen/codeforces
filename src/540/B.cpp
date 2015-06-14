#include <iostream>

#include <cmath>
#include <vector>

/*
 * Contest: Codeforces Round #301 (Task 540-B)
 * URL: http://codeforces.ru/contest/540/problem/B
 */

int main(int argc, char** argv)
{
    int n, k, p, x, y, sum = 0, c = 0;
    std::cin >> n >> k >> p >> x >> y;

    std::vector<int> marks(n, 1);

    for (int i = 0; i < k; ++i)
    {
        std::cin >> marks[i];
        if (marks[i] < y) c++;
    }

    if ((c << 1) > n)
    {
        std::cout << -1 << std::endl;
    }
    else
    {
        std::vector<int>::const_iterator cit = marks.cbegin();

        int needs = std::max(n / 2 + 1 - k + c, 0);

        for (int i = k; i < k + needs; ++i)
        {
            marks[i] = y;
        }

        for (auto it = cit; it != marks.cend(); ++it)
        {
            sum += *it;
        }

        if (sum <= x)
        {
            for (auto it = cit + k; it != marks.cend(); ++it)
            {
                std::cout << *it << " ";
            }
        }
        else
        {
            std::cout << -1 << std::endl;
        }
    }

    return 0;
}
