#include <iostream>
#include <vector>

/*
 * Contest: Code Forces Round #345 (Task 651-A)
 * URL: http://codeforces.ru/contest/651/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int a, b, answer = 0;

    std::cin >> a >> b;

    while((a >= 2 && b >= 1) || (b >= 2 && a >= 1))
    {
        if(a <= b)
        {
            a++; b -= 2;
        }
        else
        {
            b++; a -= 2;
        }

        answer = answer + 1;
    }

    std::cout << answer << std::endl; return 0;
}
