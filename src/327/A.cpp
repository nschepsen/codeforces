#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Contest: Code Forces Round #191 (Task 327-A)
 * URL: http://codeforces.ru/contest/327/problem/A
 */

int main(int argc, char** argv)
{
    int n, sum = 0; std::cin >> n;

    std::vector<int> v(n);

    for (int i = 0, in; i < n; ++i)
    {
        std::cin >> in;

        sum += in;

        v[i] = (in) ? -1 : 1;
    }

    int a = v[0], b = v[0];

    for (int i = 1; i < n; ++i)
    {
       a = std::max(v[i], a + v[i]);
       b = std::max(a, b);
    }

    std::cout << sum + b << std::endl;

    return 0;
}
