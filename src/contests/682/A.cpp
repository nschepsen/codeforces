#include <iostream>
#include <vector>

/*
 * Contest: Code Forces Round #358 (Task 682-A)
 * URL: http://codeforces.ru/contest/682/problem/A
 */

int main(int argc, char** argv)
{
    long long n, m, answer = 0;

    std::cin >> n >> m;

    answer = ((n / 5) * (m / 5)) * 5;

    int modN = n % 5, modM = m % 5, divN = n / 5, divM = m / 5;

    answer += (modM * divN) + (modN * divM);

    for (int i = 1; i <= modM; ++i)
    {
        for (int j = 1; j <= modN; ++j)
        {
            if (((i + j) % 5) == 0) answer++;
        }
    }

    std::cout << answer << std::endl;
    return 0;
}
