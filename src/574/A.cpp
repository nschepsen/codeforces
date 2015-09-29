#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Contest: Code Forces Round #318 (Task 574-A)
 * URL: http://codeforces.ru/contest/574/problem/A
 */

int main(int argc, char** argv)
{
    int n, cnt = 0; std::cin >> n;

    std::vector<int> v(n);

    for (int i = 0; i < n; ++i) { std::cin >> v[i]; }

    std::vector<int>::iterator it;

    while ((it = std::max_element(v.begin(), v.end())) != v.begin())
    {
        v[0]++; (*it)--; cnt++;
    }

    if(std::find(v.begin() + 1, v.end(), v[0]) != v.end()) cnt++;

    std::cout << cnt << std::endl; return 0;
}
