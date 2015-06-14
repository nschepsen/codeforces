#include <iostream>

#include <cmath>
#include <vector>

/*
 * Contest: Code Forces Round #304 (Task 546-A)
 * URL: http://codeforces.ru/contest/546/problem/A
 */

inline int fact(int x)
{
    return (x == 1 ? x : x * fact(x - 1));
}

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);
    int n, a, b, x;
    std::cin >> n;

    std::vector<int> v;

    while (n--)
    {
        std::cin >> a >> b;
        x = fact(a) / fact(b);

        int moves = 0, i = 2;

        while(x > 1){
            while(x % i != 0) ++i;
            x/=i;
            moves++;
        }

        v.push_back(moves);
    }

    for (int i = 0; i < v.size(); ++i)
    {
        std::cout << v[i] << std::endl;
    }

    return 0;
}
