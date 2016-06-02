#include <iostream>

/*
 * Contest: Code Forces Round #244 (Task 427-A)
 * URL: http://codeforces.ru/contest/427/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);
    int n, cnt = 0; std::cin >> n;

    for (int i = 0, cops = 0, action; i < n; ++i)
    {
        std::cin >> action;

        if(action < 0)
        {
            if(cops <= 0) { cnt++; } else { cops--; }
        }
        else
        {
           cops += action;
        }
    }

    std::cout << cnt << std::endl; return 0;
}
