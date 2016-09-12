#include <iostream>
#include <set>

/*
 * Contest: Code Forces Round #312 (Task 558-A)
 * URL: http://codeforces.ru/contest/558/problem/A
 */

typedef std::pair<int, int> item;

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, answer = 0; std::cin >> n;

    std::set<item> neg, pos;

    for (int i = 0, loc, amount; i < n; ++i)
    {
        std::cin >> loc >> amount;

        if(loc > 0)
        {
            pos.insert(item(+loc, amount));
        }
        else
        {
            neg.insert(item(-loc, amount));
        }
    }

    while(!neg.empty() && !pos.empty())
    {
        answer += (*neg.begin()).second + (*pos.begin()).second;

        pos.erase(pos.begin());
        neg.erase(neg.begin());
    }

    answer += (neg.empty() ? (pos.empty() ? 0 : (*pos.begin()).second) : (*neg.begin()).second);

    std::cout << answer << std::endl; return 0;
}
