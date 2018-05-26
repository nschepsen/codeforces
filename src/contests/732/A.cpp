#include <iostream>

/*
 * Contest: Code Forces Round #377 (Task 732-A)
 * URL: http://codeforces.ru/contest/732/problem/A
 */

int main(int argc, char** argv)
{
    int k, r, answer = 1, sum;

    std::cin >> k >> r;

    sum = k;

    while (1)
    {
        if (!(sum % 10) || !((sum - r) % 10))
        {
            break;
        }
        else
        {
            answer++; sum += k;
        }
    }

    std::cout << answer << std::endl; return 0;
}
