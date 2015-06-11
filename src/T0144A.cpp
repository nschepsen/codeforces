#include <iostream>

/*
 * Contest: Code Forces Round #103 (Task 144-A)
 * URL: http://codeforces.ru/contest/144/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);
    int n, height, max = 0, l, min = 100, r;

    std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        std::cin >> height;

        if (height > max)
        {
            max = height; l = i;
        }
        if (height <= min)
        {
            min = height; r = i;
        }
    }

    std::cout << (l + n - r - ((l < r) ? 1 : 2)) << std::endl;
    return 0;
}
