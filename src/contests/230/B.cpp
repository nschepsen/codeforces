#include <iostream>
#include <cmath>
#include <string>
#include <vector>

/*
 * Contest: Code Forces Round #142 (Task 230-B)
 * URL: http://codeforces.ru/contest/230/problem/B
 */

int main(int argc, char** argv)
{
    std::vector<bool> sieve(1000001, false);

    for (int i = 2; i <= 1000; ++i)
    {
        if (!sieve[i])
        {
            for (int j = (i * i); j <= 1000000; j += i)
            {
                sieve[j] = true;
            }
        }
    }

    std::ios_base::sync_with_stdio(0);

    int n; std::cin >> n;

    for (long long i = 0, x, index; i < n; ++i)
    {
        std::string answer = "NO";
        std::cin >> x;

        if ((x == ((index = std::sqrt(x)) * index)) && (x > 1))
        {
            answer = (!sieve[index]) ? "YES" : "NO";
        }

        std::cout << answer << std::endl;
    }

    return 0;
}
