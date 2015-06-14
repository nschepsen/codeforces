/*
#include <iostream>
#include <vector>
#include <algorithm>


 * Contest: Code Forces Round #304 (Task 546-A)
 * URL: http://codeforces.ru/contest/546/problem/A


int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    int n, count = 0;
    bool inc = false;

    std::cin >> n;
    std::vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> v[i];
    }

    std::sort(v.begin(), v.end());

    for (int i = 0; i < n - 1; ++i)
    {
        while (v[i] == v[i + 1])
        {
            v[i]++;
            count++;
            inc = true;
        }

        if (inc)
        {

            std::swap(v[i], v[j]);
            std::sort(v.begin(), v.end());

        }
    }

    std::cout << count << std::endl;
    return 0;
}
*/
