#include <iostream>
#include <vector>

/*
 * Contest: Code Forces Round #223 (Task 381-A)
 * URL: http://codeforces.ru/contest/381/problem/A
 */

int main(int argc, char** argv)
{
    int n, i = 0, value, dimsan = 0, sereja = 0;

    std::cin >> n;

    std::vector<int> v(n);

    std::vector<int>::iterator l = v.begin(), r = v.end() - 1;

    for (int i = 0; i < n; ++i)
    {
        std::cin >> v[i];
    }

    while(l <= r && (++i) >= 0)
    {
        value = std::max(*l, * r);

        if(i & 1)
        {
            dimsan += value;
        }
        else
        {
            sereja += value;
        }

        if(value == *l) ++l; else --r;
    }

    std::cout << dimsan << " " << sereja << std::endl; return 0;
}
