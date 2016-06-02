#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Contest: Code Forces Round #260 (Task 456-A)
 * URL: http://codeforces.ru/contest/456/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n; std::cin >> n;

    std::vector<std::pair<int, int> > v;

    for (int i = 0, a, b; i < n; ++i)
    {
        std::cin >> a >> b;

        v.push_back(std::make_pair(a, b));
    }

    std::sort(v.begin(), v.end(), std::greater<std::pair<int, int> >());

    for (int i = 0; i < n - 1; ++i)
    {
        if(v[i].second < v[i + 1].second)
        {
            std::cout << "Happy Alex" << std::endl;

            return 0;
        }
    }

    std::cout << "Poor Alex" << std::endl; return 0;
}
