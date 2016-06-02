#include <cstdio>
#include <vector>

/*
 * Contest: Code Forces Round #194 (Task 334-A)
 * URL: http://codeforces.ru/contest/334/problem/A
 */

int main(int argc, char** argv)
{
    int n; scanf("%d", &n);

    std::vector<std::vector<int> > v(n, std::vector<int>(n));

    for (int i = 0; i < n; ++i)
    {
        if(i & 1)
        {
            for (int j = n - 1; j >= 0; --j)
            {
                v[j][i] = n * i + n - j;
            }
        }
        else
        {
            for (int j = 0; j < n; ++j)
            {
                v[j][i] = n * i + j + 1;
            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%d%c", v[i][j], (j != n - 1) ? ' ' : '\n');
        }
    }

    return 0;
}
