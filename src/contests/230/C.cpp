#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

/*
 * Contest: Code Forces Round #142 (Task 230-C)
 * URL: http://codeforces.ru/contest/230/problem/C
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    int rows, columns; std::cin >> rows >> columns;
    std::vector<std::string> v(rows);

    for (int i = 0; i < rows; ++i)
    {
        std::cin >> v[i];
    }

    std::vector<std::vector<int> > c(rows, std::vector<int>(columns, -1));

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0, lp, rp; j < columns; ++j)
        {
            for (int offset = 0; offset <= ((columns / 2) + 10); ++offset)
            {
                rp = ((j + offset) < columns) ? (j + offset) : (j + offset  - columns);
                lp = ((j - offset) >= 0) ? (j - offset) : (columns - j - offset);

                if ((v[i][lp] == '1') || (v[i][rp] == '1'))
                {
                    c[i][j] = offset; break;
                }
            }

            if (c[i][j] == -1) { std::cout << -1 << std::endl; return 0; }
        }
    }

    std::vector<int> solution(columns, 0);

    for (int i = 0; i < columns; ++i)
    {
        for (int j = 0; j < rows; ++j)
        {
            solution[i] += c[j][i];
        }
    }

    std::cout << (*std::min_element(solution.begin(), solution.end())) << std::endl;
    return 0;
}
