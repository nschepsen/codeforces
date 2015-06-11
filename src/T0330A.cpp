#include <iostream>

#include <string>
#include <set>
#include <vector>

/*
 * Contest: Code Forces Round #192 (Task 330-A)
 * URL: http://codeforces.ru/contest/330/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);
    int r, c, pos, rc = 0, cc = 0;

    std::cin >> r >> c;

    std::vector<std::string> v(r);
    std::set<int> s;

    bool found = false;

    for (int i = 0; i < r; ++i)
    {
        std::cin >> v[i];

        while ((pos = v[i].find('S', pos + 1)) != std::string::npos)
        {
            s.insert(pos); found = true;
        }

        if (!found) rc++; else found = false;
    }

    std::cout << ((rc * c) + (cc = c - s.size()) * r - rc * cc) << std::endl;
    return 0;
}
