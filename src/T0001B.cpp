#include <iostream>

#include <vector>
#include <cmath>
#include <cstring>

#include <stdio.h>

/*
 * Contest: Codeforces Round #001 (Task 001-A)
 * URL: http://codeforces.ru/contest/001/problem/B
 */

int main(int argc, char** argv)
{
    std::vector<int> v;
    char message[32];

    int tests;
    scanf("%d", &tests);

    while (tests--)
    {
        int column = 0, p = 0, row = 0;
        scanf("%s", message);

        if (message[0] == 'R' && std::isdigit(message[1]) && std::strchr(message, 'C'))
        {
            sscanf(message, "R%dC%d", &row, &column);
            while (column)
            {
                v.push_back((column - 1) % 26 + 65);

                if (!(column % 26))
                {
                    column -= 1;
                }

                column = column / 26;
            }

            while (!v.empty())
            {
                printf("%c", v.back());
                v.pop_back();
            }

            printf("%d\n", row);
        }
        else
        {
            char buffer[8];
            sscanf(message, "%[A-Z]%d", buffer, &row);

            for (auto i = 0; std::isalpha(message[i]); ++i)
            {
                v.push_back(message[i]);
            }

            while (!v.empty())
            {
                column += std::ceil(pow(26, p++)) * (v.back() - 64);
                v.pop_back();
            }

            printf("R%dC%d\n", row, column);
        }
    }

    return 0;
}
