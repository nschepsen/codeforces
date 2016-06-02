#include <iostream>
#include <string>
#include <cstdlib>

/*
 * Contest: Code Forces Round #308 (Task 552-B)
 * URL: http://codeforces.ru/contest/552/problem/B
 */

int main(int argc, char** argv)
{
    std::string s; long long size, sum;
    std::cin >> s;

    sum = strtol(s.c_str(), 0, 10) * (size = s.size());

    for (int i = 1; i < size; ++i)
    {
        sum -= strtol(std::string(i, '9').c_str(), 0, 10);
    }

    std::cout << sum << std::endl; return 0;
}
