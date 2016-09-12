#include <iostream>
#include <map>

/*
 * Contest: Code Forces Round #356 (Task 680-A)
 * URL: http://codeforces.ru/contest/680/problem/A
 */

int main(int argc, char** argv)
{
    int n = 5, answer = 0, max = 0; std::map<int, int> m;

    for (int i = 0, x; i < n; ++i) 
    {
        std::cin >> x; answer += x;

        if(!m.count(x))
        {
            m[x] = 1;
        }
        else
        {
            if(++m[x] < 4)
            {
                max = std::max(max, x * m[x]);
            }
        }
    }

    std::cout << answer - max << std::endl; return 0;
}
