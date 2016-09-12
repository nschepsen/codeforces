#include <iostream>
#include <cmath>
#include <vector>

/*
 * Contest: Code Forces Round #287 (Task 507-B)
 * URL: http://codeforces.ru/contest/507/problem/B
 */

#define distance(x1, y1, x2, y2)  std::pow(std::pow((x2 - x1), 2) + std::pow((y2 - y1), 2), 0.5)

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int r, x, y, a, b;

    std::cin >> r >> x >> y >> a >> b;

    std::cout << std::ceil((double) distance(x, y, a, b) / (r << 1)) << std::endl;

    return 0;
}
