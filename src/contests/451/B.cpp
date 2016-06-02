#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Contest: Code Forces Round #258 (Task 451-B)
 * URL: http://codeforces.ru/contest/451/problem/B
 */

bool is_sorted(std::vector<int>& v, int from, int to, bool (*compare)(int, int))
{
    for(int i = from; i < to; ++i)
    {
        if(compare(v[i], v[i + 1]))
        {
            return false;
        }
    }
    
    return true;
}

bool less(int a, int b) { return a < b; }
bool greater(int a, int b) { return a > b; }

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n; std::cin >> n;

    std::vector<int> v(n), s(n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> v[i];

        s[n - i - 1] = v[i];
    }

    std::sort(s.begin(), s.end());

    int l = 0, r = n - 1;

    while((l <= r) && (v[l] == s[l])) { l++; }

    if(l == n)
    {
        std::cout << "yes\n1 1" << std::endl;

        return 0;
    }

    while((r >= 0) && (v[l] != s[r])) { r--; }

    if(!is_sorted(v, 0, l - 1, greater) || ((l != 0) && (v[r] < v[l - 1])))
    {
        std::cout << "no" << std::endl; return 0;
    }

    if(!is_sorted(v, r + 1, n - 1, greater) || ((r != n -1) && (v[l] > v[r + 1])))
    {
        std::cout << "no" << std::endl; return 0;
    }

    if(!is_sorted(v, l, r, less))
    {
        std::cout << "no" << std::endl; return 0;
    }

    std::cout << "yes\n" << l + 1 << " " << r + 1 << std::endl; return 0;
}
