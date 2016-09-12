#include <iostream>
#include <vector>

/*
 * Contest: Code Forces Round #356 (Task 680-B)
 * URL: http://codeforces.ru/contest/680/problem/B
 */

int main(int argc, char** argv)
{
    int n, a, thieves = 0; std::cin >> n >> a;

    int l = a - 1, r = a - 1;

    std::vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> v[i];
    }

    while ((l >= 0) || (r < n))
    {
        if(l == r)
        {
            if(v[l]) thieves++;
        }
        else if ((l >= 0) && (r < n))
        {
            if (v[l] && v[r]) thieves += 2;
        }
        else if (l >= 0)
        {
            if (v[l]) thieves++;
        }
        else if (r < n) if (v[r]) thieves++;

        l--; r++;
    }

    std::cout << thieves << std::endl; return 0;
}
