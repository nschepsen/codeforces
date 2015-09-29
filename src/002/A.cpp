#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <string>
#include <limits>

/*
 * Contest: Code Forces Round #002 (Task 2-A)
 * URL: http://codeforces.ru/contest/2/problem/A
 */

#define fst first
#define snd second

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);
    int n, max = std::numeric_limits<int>::min();

    std::cin >> n;
    std::string s;

    std::vector<std::pair<std::string, int> > v(n);

    std::map<std::string, int> m;

    for (int i = 0, a; i < n; ++i)
    {
        std::cin >> s >> a;

        m[s] += a;

        v[i] = std::make_pair(s, a);
    }

    for(auto& e : m) { if(max < e.snd) { max = e.snd; } }

    std::vector<std::string> ans;

    for(auto& e : m) { if(max == e.snd) { ans.push_back(e.fst); } }

    if(ans.size() > 1)
    {
        m.clear();

        for(auto& e : v)
        {
            if((max <= (m[e.fst] += e.snd)) && (std::find(ans.begin(), ans.end(), e.fst) != ans.end()))
            {
                std::cout << e.fst << std::endl; return 0;
            }
        }
    }
    else
    {
        std::cout << ans[0] << std::endl;
    }

    return 0;
}
