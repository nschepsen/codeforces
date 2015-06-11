#include <iostream>

#include <cstdio>
#include <cmath>
#include <vector>

/*
 * Contest: VK Cup 2012 Q1 (Task 158-D)
 * URL: http://codeforces.ru/contest/158/problem/D
 */

int main(int argc, char** argv)
{
    int n, maximum = 0, temp = 0;
    std::cin >> n;

    std::vector<int> weights(n), steps;

    for (unsigned i = 0; i < n; ++i)
    {
        scanf("%d", &weights[i]);
        maximum += weights[i];
    }

    for (unsigned i = 2; i <= std::sqrt(n); ++i)
    {
        if (!(n % i))
        {
            steps.push_back(i);
            if (i != 2) steps.push_back(n / i);
        }
    }

    for (auto it = steps.begin(); it != steps.end(); ++it)
    {
        if (n / *it != 2)
        {
            for (int i = 0; i < *it; ++i, temp = 0)
            {
                for (int j = i; j < n; j += *it)
                {
                    temp += weights[j];
                }

                if (maximum < temp) maximum = temp;
            }
        }
    }

    std::cout << maximum << std::endl;
    return 0;
}
