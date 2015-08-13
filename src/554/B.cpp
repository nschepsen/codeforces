#include <iostream>
#include <vector>
#include <string>

#include <algorithm>

/*
 * Contest: Code Forces Round #309 (Task 554-B)
 * URL: http://codeforces.ru/contest/554/problem/B
 */

int getCleanRooms(std::vector<std::vector<int> > &v, int size)
{
    int rooms = size;

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (v[i][j] == 0)
            {
                rooms--; break;
            }
        }
    }

    return rooms;
}

void clean(std::vector<std::vector<int> > & v, int column, int size)
{
    for (int i = 0; i < size; ++i)
    {
        v[i][column] = (v[i][column]) ? 0 : 1;
    }
}

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);
    int n; std::string s;

    std::vector<int> toclean;

    std::cin >> n;

    std::vector<std::vector<int> > v(n, std::vector<int>(n));

    for (int i = 0; i < n; ++i)
    {
        std::cin >> s;

        for (int j = 0; j < n; ++j)
        {
            v[i][j] = (s[j] - '0');
        }
    }

    int rooms = getCleanRooms(v, v.size());

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (!v[i][j]) { toclean.push_back(j); }
        }

        std::vector<std::vector<int> > copy = v;

        for (int a = 0; a < toclean.size(); ++a)
        {
            clean(copy, toclean[a], copy.size());
        }

        rooms = std::max(rooms, getCleanRooms(copy, copy.size()));
        copy.clear(); toclean.clear();
    }

    std::cout << rooms << std::endl; return 0;
}
