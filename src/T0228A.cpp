#include <iostream>
#include <set>

/*
 * Contest: Code Forces Round #141 (Task 228-A)
 * URL: http://codeforces.ru/contest/228/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);
    std::set<int> horseshoes; int x;

    for (int i = 0; i < 4; ++i)
    {
        std::cin >> x;
        horseshoes.insert(x);
    }

    std::cout << (4 - horseshoes.size()) << std::endl;
    return 0;
}
