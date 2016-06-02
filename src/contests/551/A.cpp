#include <iostream>
#include <vector>

/*
 * Contest: Code Forces Round #307 (Task 551-A)
 * URL: http://codeforces.ru/contest/551/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);
    int n; std::cin >> n;

    std::vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> v[i];
    }

    for (int i = 0; i < n; ++i)
    {
        int place = 1;

        for (int j = 0; j < n; ++j)
        {
            if(v[i] < v[j])
            {
                place++;
            }
        }

        std::cout << place << " ";
    }

    std::cout << std::endl; return 0;
}
