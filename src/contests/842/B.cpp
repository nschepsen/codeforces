#include <iostream>
#include <cmath>
#include <string>

/*
 * Contest: Code Forces Round #430 (Task 842-B)
 * URL: http://codeforces.ru/contest/842/problem/B
 */

#define len(x, y) std::sqrt(x * x + y * y)

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int r, d, count = 0;
    int n;
    int x, y, radius;

    std::cin >> r >> d >> n;

    for (int i = 0; i < n; ++i)
    {
        std::cin >> x >> y >> radius;

        double tmp =  len(x, y);

        if(tmp - radius >= r - d && tmp + radius <= r) count++;
    }

    std::cout << count << std::endl; return 0;
}
