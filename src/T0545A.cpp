#include <iostream>
#include <vector>

/*
 * Contest: Code Forces Round #303 (Task 545-A)
 * URL: http://codeforces.ru/contest/545/problem/A
 */

int main(int argc, char** argv)
{
    std::vector<int> autos;
    int n;

    std::cin >> n;

    int matrix[n][n];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            std::cin >> matrix[i][j];
        }
    }



    for (int i = 0; i < n; ++i)
    {
        bool good = true;

        for (int j = 0; j < n; ++j)
        {
            if (matrix[i][j] == 1 || matrix[i][j] == 3)
            {
                good = false; break;
            }
        }

        if (good) autos.push_back((i + 1));
    }

    std::cout << autos.size() << std::endl;

    for (auto it = autos.cbegin(); it != autos.cend(); ++it)
    {
        std::cout << *it << " ";
    }

    return 0;
}
