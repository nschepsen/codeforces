#include <iostream>
#include <limits>

/*
 * Contest: Code Forces Round #77 (Task 096-B)
 * URL: http://codeforces.ru/contest/96/problem/B
 */

long long in, result = std::numeric_limits<long long>::max();

void next(long long n, int fours, int sevens)
{
    if (fours + sevens <= 10)
    {
        if (n >= in && fours == sevens && n < result)
        {
            result = n;
        }
        else
        {
            next(n * 10 + 4, fours + 1, sevens);
            next(n * 10 + 7, fours, sevens + 1);
        }
    }
}

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);
    std::cin >> in;

    next(0, 0, 0);

    std::cout << static_cast<long long>(result) << std::endl;
    return 0;
}
