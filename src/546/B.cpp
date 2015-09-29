#include <iostream>
#include <vector>

/*
 * Contest: Code Forces Round #304 (Task 546-B)
 * URL: http://codeforces.ru/contest/546/problem/B
 */

int main(int argc, char** argv)
{
    int n, r = 0, count = 0; std::cin >> n;

    std::vector<int> v(n + 1, 0);

    for (int i = 0, id; i < n; ++i)
    {
        std::cin >> id;  v[id]++;
    }

    for (int i = 0; i <= n; ++i)
    {
        if(v[i] > 1)
        {
            r = v[i] - 1; v[i + 1] += r; count += r;
        }
    }

    std::cout << count + (r * (r - 1) / 2) << std::endl;

    return 0;
}
