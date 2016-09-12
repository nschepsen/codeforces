#include <iostream>
#include <set>
#include <limits>
#include <vector>

/*
 * Contest: Code Forces Round #300 (Task 538-B)
 * URL: http://codeforces.ru/contest/538/problem/B
 */

int toMagic(int x)
{
    std::string bin;

    while(x > 0)
    {
        bin.append(std::to_string(x & 1)); x >>= 1;
    }

    return std::stod(std::string(bin.rbegin(), bin.rend()));
}

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n; std::cin >> n;

    std::set<int> magicNumbers;

    std::vector<std::vector<int> > dp(n + 1, std::vector<int>());

    for (int i = 1; i < 65; ++i)
    {
        magicNumbers.insert(toMagic(i));
    }

    for (int i = 1; i <= n; ++i)
    {
        for(auto item : magicNumbers)
        {
            if(item > i)
            {
                break;
            }

            if((dp[i - item].size() < dp[i].size()) || (dp[i].size() == 0))
            {
                dp[i] = dp[i - item]; dp[i].push_back(item);
            }
        }
    }

    std::cout << dp[n].size() << std::endl;

    for (int i = 0; i < dp[n].size(); ++i) std::cout << dp[n][i] << ((i == (dp[n].size() - 1)) ? "\n" : " "); return 0;
}
