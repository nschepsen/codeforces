#include <algorithm>
#include <cstdio>
#include <vector>
#include <unordered_map>

/*
 * Contest: Code Forces Round #320 (Task 579-B)
 * URL: http://codeforces.ru/contest/579/problem/B
 */

struct Team
{
    int member1;
    int member2;

    int score;

    Team(int a, int b, int s) : member1(a), member2(b), score(s) { }

    bool operator>(const Team& other) const
    {
        return score > other.score;
    }
};

int main(int argc, char** argv)
{
    int n; scanf("%d", &n); std::vector<Team> v;

    for (int i = 2; i <= 2 * n; ++i)
    {
        for (int j = 1, score; j < i; ++j)
        {
            scanf("%d", &score);

            v.push_back(Team(i, j, score));
        }
    }

    std::sort(v.begin(), v.end(), std::greater<Team>());

    std::unordered_map<int, int> teams;

    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if(!teams[(*it).member1] && !teams[(*it).member2])
        {
            teams[(*it).member1] = (*it).member2;
            teams[(*it).member2] = (*it).member1;
        }
    }

    for (int i = 1; i <= n * 2; ++i) { printf("%d%c", teams[i], (i != 2 * n) ? ' ' : '\n'); }

    return 0;
}
