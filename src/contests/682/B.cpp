#include <iostream>
#include <vector>

#include <algorithm>

/*
 * Contest: Code Forces Round #358 (Task 682-B)
 * URL: http://codeforces.ru/contest/682/problem/B
 */

int main(int argc, char** argv)
{
    int n; std::cin >> n;
    std::vector<long long> v(n);

    long long answer = 1;

    for (int i = 0; i < n; ++i)
    {
        std::cin >> v[i];
    }

    std::sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); ++i)
    {
        if(v[i] >= answer)
        {
            v [i] = answer; answer++;
        }
    }

    std::cout << answer << std::endl;


    return 0;
}
