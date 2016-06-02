#include <iostream>
#include <vector>

/*
 * Contest: Code Forces Round #325 (Task 586-A)
 * URL: http://codeforces.ru/contest/586/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);
    int n, ans = 0, seq;

    std::cin >> n;

    std::vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> v[i];
    }

    int i = 0; while (v[i] == 0) i++;

    while(i < n)
    {
        if (v[i] == 1)
        {
            ans++; i++;
        }
        else
        {
            seq = i;

            while((i < n) && (v[i] == 0)) i++; ans += ((((i - seq) <= 1) && (i < n)) ? 1 : 0);
        }
    }

    std::cout << ans << std::endl; return 0;
}
