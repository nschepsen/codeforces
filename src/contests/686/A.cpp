#include <iostream>

/*
 * Contest: Code Forces Round #359 (Task 686-A)
 * URL: http://codeforces.ru/contest/686/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    long long n, x, sad = 0; char ch;

    std::cin >> n >> x;

    for (long long i = 0, in; i < n; ++i)
    {
        std::cin >> ch >> in;

        if(ch == '+')
        {
            x += in;
        }
        else
        {
            if(x >= in) x -= in; else sad++;
        }
    }

    std::cout << x << " " << sad << std::endl; return 0;
}
