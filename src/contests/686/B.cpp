#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Contest: Code Forces Round #359 (Task 686-B)
 * URL: http://codeforces.ru/contest/686/problem/B
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n; std::cin >> n;

    bool swapped = false;

    std::vector<int> v(n);

    for (int i = 0; i < n; ++i) std::cin >> v[i];

    for (int i = 0; i < n; ++i)
    {
        swapped = false;

        for (int j = 0; j < n - i - 1; ++j)
        {
            if (v[j] > v[j + 1])
            {
                std::swap(v[j], v[j + 1]);

                swapped = true;

                std::cout << j + 1 << " " << j + 2 << std::endl;
            }
        }

        if(!swapped) { break; }
    }

    return 0;
}
