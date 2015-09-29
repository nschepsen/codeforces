#include <iostream>
#include <vector>

/*
 * Contest: Яндекс.Алгоритм 2011 Квалификация 2 (Task 82-A)
 * URL: http://codeforces.ru/contest/82/problem/A
 */

int main(int argc, char** argv)
{
    std::vector<std::string> v {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard" };

    int n, i; std::cin >> n;

    for (i = 1; 5 * i < n; i <<= 1)
    {
        n -= 5 * i;
    }

    std::cout << v[(n - 1) / i] << std::endl; return 0;
}
