#include <iostream>

/*
 * Contest: Code Forces Round #222 (Task 378-A)
 * URL: http://codeforces.ru/contest/378/problem/A
 */

int main(int argc, char** argv)
{
    int a, b, wins = 0, draws = 0, loses = 0;

    std::cin >> a >> b;

    for (int i = 1; i <= 6; ++i)
    {
        if(std::abs(a - i) < std::abs(b - i))
        {
            wins++;
        }
        else
        if(std::abs(a - i) > std::abs(b - i))
        {
            loses++;
        }
        else
        {
            draws++;
        }
    }

    std::cout << wins << " " << draws << " " << loses << std::endl;

    return 0;
}
