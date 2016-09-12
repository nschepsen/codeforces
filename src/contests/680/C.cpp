#include <iostream>
#include <vector>
#include <string>

/*
 * Contest: Code Forces Round #356 (Task 680-C)
 * URL: http://codeforces.ru/contest/680/problem/C
 */

bool isPrime(int x)
{
    for (int i = 2; i <= x>>1; ++i) if (!(x % i)) return false; return true;
}

int main(int argc, char** argv)
{
    int n = 20, guess = 2; std::vector<int> v(100 + 1, 1);

    std::string response; bool next;

    while (n--)
    {
        for (int i = guess; i <= 100; ++i)
        {
            if (v[i]) { guess = i; next = true; break; }
        }

        if (!next) break;

        std::cout << guess << std::endl; std::cin >> response;

        if (!response.compare("yes"))
        {
            for (int i = guess; i <= 100; ++i)
            {
                if (i % guess) v[i] = 0;
            }
        }
        else
        {
            for (int i = guess; i <= 100; ++i) if (!(i % guess)) v[i] = 0;
        }

        next = false; guess++;
    }

    for (int i = 100; i > 1; --i)
    {
        if (v[i])
        {
            std::cout << (isPrime(i) ? "prime" : "composite") << std::endl << std::flush; break;
        }
    }

    return 0;

}
