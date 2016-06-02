#include <iostream>
#include <cmath>
#include <vector>

/*
 * Contest: Code Forces Round #261 (Task 459-A)
 * URL: http://codeforces.ru/contest/459/problem/A
 */

struct Point
{
    int x, y;
    Point() : x(0), y(0) {}
};

int main(int argc, char** argv)
{
    Point a, b, c, d;

    int delta;

    std::cin >> a.x >> a.y >> b.x >> b.y;

    delta = (a.x == b.x) ? std::abs(b.y - a.y) : std::abs(b.x - a.x);

    if(a.x == b.x)
    {
        if(((a.x + delta) <= 1000) || ((a.x - delta) >= -1000))
        {
              c.x = ((a.x + delta) <= 1000) ? a.x + delta : a.x - delta;
              c.y = a.y;

              d.x = c.x;
              d.y = b.y;

              std::cout << c.x << " " << c.y << " " << d.x << " " << d.y << std::endl;
        }
        else
        {
            std::cout << -1 << std::endl;
        }
    }
    else if(a.y == b.y)
    {
        if(((a.x + delta) <= 1000) || ((a.x - delta) >= -1000))
        {
              c.y = ((a.y + delta) <= 1000) ? a.y + delta : a.y - delta;
              c.x = a.x;

              d.y = c.y;
              d.x = b.x;

              std::cout << c.x << " " << c.y << " " << d.x << " " << d.y << std::endl;
        }
        else
        {
            std::cout << -1 << std::endl;
        }
    }
    else
    {
        if(std::abs(b.x - a.x) != std::abs(b.y - a.y))
        {
            std::cout << -1 << std::endl;
        }
        else
        {
            c.x = a.x;
            c.y = b.y;

            d.x = b.x;
            d.y = a.y;

            std::cout << c.x << " " << c.y << " " << d.x << " " << d.y << std::endl;
        }
    }

    return 0;
}
