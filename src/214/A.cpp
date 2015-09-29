#include <iostream>

/*
 * Contest: Code Forces Round #131 (Task 214-A)
 * URL: http://codeforces.ru/contest/214/problem/A
 */

int main(int argc, char** argv)
{
    int n, m, count = 0; std::cin >> n >> m;

    for (int a = 0; a <= 1000; ++a)
    {
        for (int b = 0; b <= 1000; ++b)
        {
            if(((a * a + b) == n ) && ((a + b * b) == m))
            {
                count++;
            }
        }
    }

    std::cout << count << std::endl; return 0;
}
