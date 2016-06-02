#include <iostream>
#include <vector>

/*
 * Contest: Code Forces Round #269 (Task 471-A)
 * URL: http://codeforces.ru/contest/471/problem/A
 */

int main(int argc, char** argv)
{
    std::vector<int> v(10, 0); int a = 0, b = 0;

    for (int i = 0, x, index; i < 6; ++i)
    {
        std::cin >> x; v[x]++;
    }

    for (int i = 0; i < 10; ++i)
    {
        if(v[i] == 6)
        {
            a = 1; b = 1;
        }
        else if (v[i] >= 4)
        {
            a = 1;
        }
        else if(v[i] == 2) { b = 1; }
    }

    std::cout << (a ? (b ? "Elephant" : "Bear") : "Alien") << std::endl;
    return 0;
}
