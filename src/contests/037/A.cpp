#include <iostream>
#include <vector>

/*
 * Contest: CodeForces Beta Round #37 (Task 37-A)
 * URL: http://codeforces.ru/contest/37/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);
    int n, towers = 0, height = 0; std::cin >> n;

    std::vector<int> v(1000, 0);

    for (int i = 0, index = 0; i < n; ++i)
    {
        std::cin >> index; v[index - 1]++;
    }

    for (int i = 0; i < 1000; ++i)
    {
        if (v[i] > 0)
        {
            towers++;

            if(v[i] > height) { height = v[i]; }
        }
    }

    std::cout << height << " " << towers << std::endl;

    return 0;
}
