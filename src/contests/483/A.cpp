#include <iostream>

/*
 * Contest: Code Forces Round #275 (Task 483-A)
 * URL: http://codeforces.ru/contest/483/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    long long l, r; std::cin >> l >> r;

    if(l & 1)
    {
        ++l;
    }

    if((l + 2) > r)
    {
        std::cout << -1 << std::endl;
    }
    else
    {
        std::cout << l << " " << l + 1 << " " << l + 2 << std::endl;
    }

    return 0;
}
