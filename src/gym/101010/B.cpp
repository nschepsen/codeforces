#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>

/*
 * Contest: Russian Code Cup 2016 (Q2 Task B)
 * URL: http://codeforces.com/gym/101010/problem/B
 */

template <typename it> it last(it iter) { return --iter; }

void solve(void);

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n; std::cin >> n;

    for (int i = 0; i < n; ++i) solve();

    return 0;
}

void solve(void)
{
    int n, m; std::string mask; std::cin >> n >> m;

    std::vector<int> clients(m, 1);
    std::vector<int> dp(m + n + 1, 0);

    std::set<std::pair<int, int> > in, out;

    for (int j = 0, x; j < n; ++j)
    {
        std::cin >> x; in.insert(std::make_pair(x, j));
    }
    for (int j = 0, x; j < m; ++j)
    {
        std::cin >> x; out.insert(std::make_pair(x, j));
    }

    std::cin >> mask;

    for(int d = 0; d < mask.length(); ++d)
    {
        if(mask[d] == '+')
        {
            dp[d + 1] = dp[d] + (*in.rbegin()).first; in.erase(last(in.end()));
        }
        else
        {
            if(!out.empty())
            {
                if(dp[d] < (*out.begin()).first)
                {
                    clients[(*out.rbegin()).second] = 0;
                    out.erase(last(out.end())); dp[d + 1] = dp[ d];
                }
                else
                {
                    dp[d + 1] = dp[d] - (*out.begin()).first; out.erase(out.begin());
                }
            }
        }
    }

    int answer = 0;

    for (int a = 0; a < m; ++a) if(clients[a] == 0) answer++; std::cout << answer << std::endl;
}
