#include <iostream>

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <vector>

/*
 * Contest: VK Cup 2012 Q1 (Task 158-B)
 * URL: http://codeforces.ru/contest/158/problem/B
 */

int main(int argc, char** argv)
{
    int n, count = 0;
    std::cin >> n;

    std::vector<int> clique(n);

    for (unsigned i = 0; i < n; ++i)
    {
        scanf("%d", &clique[i]);
    }

    std::sort(clique.begin(), clique.end(), std::greater<int>());

    auto l = clique.begin();
    auto r = clique.end() - 1;

    while (l <= r)
    {
        switch (*l)
        {
        case 4:
            ++l;
            break;
        case 3:
            if (*r == 1) --r;
            ++l;
            break;
        case 2:
            if (*l == *(++l)) ++l; else r -= 2;
            break;
        default:
            l += 4;
            break;
        }
        count++;
    }

    std::cout << count << std::endl;
    return 0;
}
