#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

/*
 * Contest: Code Forces Round #319 (Task 577-C)
 * URL: http://codeforces.ru/contest/577/problem/C
 */

int main(int argc, char** argv)
{
    int n; std::cin >> n;

    std::vector<std::pair<int, int> > v;
    std::vector<int> t(n, 0);

    std::set<int> s;

    if(n == 1) { std::cout << 0 << std::endl; return 0;}
    if(n == 2) { std::cout << 1 << std::endl << "2" << std::endl; return 0;}

    for (int i = 2; i <= n; ++i)

    {

        int cnt = 0;

        for (int j = 2; j < i; ++j)
        {
            if (!(i % j)) cnt++;

        }

        s.insert(cnt);

        t[i] = cnt;
        v.push_back(std::make_pair(cnt, i));


    }

    int max = s.size() + 1;

    std::sort(v.begin(), v.end());

    std::vector<int> result;


    std::set<int> ans;


    for (int i = 0; i < v.size(); ++i)
    {
       if(v[i].first == 1)
       {
           s.insert(v[i].second);
       }

       for (int k = 2; k <= v[i].second; ++k)
    {
        if(!(v[i].second % k))
        {
            if (ans.count(v[i].second / k) == 0) {
                ans.insert(v[i].second / k);
            }
        }
    }
    }

    std::cout << ans.size() << std::endl;


    for(auto e : ans) std::cout << e << " "; std::cout << std::endl;

    return 0;
}
