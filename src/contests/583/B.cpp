#include <iostream>
#include <vector>

/*
 * Contest: Code Forces Round #323 (Task 583-B)
 * URL: http://codeforces.ru/contest/583/problem/B
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, pieces = 0, dir = 0, ans = 0;

    std::cin >> n;

    std::vector<int> v(n);

    for (int i = 0; i < n; ++i) { std::cin >> v[i]; }

    while(pieces < n)
    {
        if(dir)
        {
            for(auto it = v.rbegin(); it != v.rend();)
            {
               if(*it <= pieces)
               {
                   pieces++;

                   it = std::vector<int>::reverse_iterator(v.erase(std::next(it).base()));
               }
               else
               {
                   it++;
               }

               if(it == v.rend()) { dir = 0; if(pieces != n) { ans ++; } }
            }
        }
        else
        {
            for(auto it = v.begin(); it != v.end();)
            {
               if(*it <= pieces)
               {
                   pieces++; it = v.erase(it);
               }
               else
               {
                   it++;
               }

               if(it == v.end()) { dir = 1; if(pieces != n) { ans ++; } }
            }
        }
    }

    std::cout << ans << std::endl; return 0;
}
