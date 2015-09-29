#include <iostream>
#include <string>
#include <vector>

/*
 * Contest: Code Forces Beta Round #3 (Task 3-A)
 * URL: http://codeforces.ru/contest/3/problem/A
 */

struct Point
{
    char x, y;

    bool operator!=(const Point& other)
    {
        return (x != other.x) || (y != other.y);
    }
};

int main(int argc, char** argv)
{
    std::vector<std::string> v;

    struct Point s, t;

    std::cin >> s.x >> s.y >> t.x >> t.y;

    while (s != t)
    {
        if (t.x > s.x)
        {
            if (t.y > s.y)
            {
                s.x++;
                s.y++;

                v.push_back("RU");
            }
            else if (t.y < s.y)
            {
                s.x++;
                s.y--;

                v.push_back("RD");
            }
            else
            {
                s.x++;
                v.push_back("R");
            }
        }
        else if (t.x < s.x)
        {
            if (t.y > s.y)
            {
                s.x--;
                s.y++;

                v.push_back("LU");
            }
            else if (t.y < s.y)
            {
                s.x--;
                s.y--;

                v.push_back("LD");
            }
            else
            {
                s.x--;

                v.push_back("L");
            }
        }
        else
        {
            if (t.y > s.y)
            {
                s.y++;

                v.push_back("U");
            }
            else
            {
                s.y--;

                v.push_back("D");
            }
        }
    }

    std::cout << v.size() << std::endl;

    for (const auto& e : v) { std::cout << e << std::endl; }

    return 0;
}
