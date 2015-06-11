#include <iostream>
#include <vector>

#include <limits>

/*
 * Contest: Code Forces Round #303 (Task 545-C)
 * URL: http://codeforces.ru/contest/545/problem/C
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);
    int n, count = 0;

    long long bound = std::numeric_limits<long long>::min();

    std::cin >> n;
    std::vector<std::pair<int, int> > trees(n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> trees[i].first >> trees[i].second;
    }

    for (int i = 0; i < n; ++i)
    {
        if (i == (n - 1))
        {
            count++;
            break;
        }

        if ((trees[i].first - trees[i].second) > bound)
        {
            std::cout << "inc 1" << std::endl;
            count++;
            bound = trees[i].first;
            continue;

        }

        if ((trees[i].first + trees[i].second) < trees[i + 1].first)
        {
            if ((trees[i + 1].first - trees[i + 1].second) > (trees[i].first + trees[i].second) || (trees[i + 1].first - trees[i + 1].second) <= (trees[i].first))
            {
                std::cout << "inc 2" << std::endl;
                count++;
                bound = trees[i].first + trees[i].second;
                continue;
            }
        }
    }

    std::cout << count << std::endl;
    return 0;
}
