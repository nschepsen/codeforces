#include <iostream>

/*
 * Contest: Code Forces Round #63 (Task 069-A)
 * URL: http://codeforces.ru/contest/69/problem/A
 */

struct vector
{
    int x, y, z;

    vector() : x(0), y(0), z(0)
    {

    }

    void add(int _x, int _y, int _z)
    {
        x += _x;
        y += _y;
        z += _z;
    }

    bool solve()
    {
        bool equilibrium = false;
        if ((x == 0) && (y == 0) && (z == 0)) equilibrium = true;

        return equilibrium;
    }
};

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);
    int n, x, y, z; vector v;

    std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        std::cin >> x >> y >> z; v.add(x, y, z);
    }

    std::cout << ((v.solve() ? "YES" : "NO")) << std::endl;
    return 0;
}
