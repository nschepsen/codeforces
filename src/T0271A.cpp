#include <iostream>
#include <vector>

/*
 * Contest: Code Forces Round #166 (Task 271-A)
 * URL: http://codeforces.ru/contest/271/problem/A
 */

bool isbeautiful(int year)
{
    std::vector<int> v(10, 0);
    while (year > 0)
    {
        if (v[year % 10]++ != 0) return false; year /= 10;
    }

    return true;
}

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);
    int n; std::cin >> n;

    while (1) { if (isbeautiful(++n)) break; }

    std::cout << n << std::endl;
    return 0;
}
