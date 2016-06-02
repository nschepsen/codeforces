#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Contest: Code Forces Round #143 (Task 230-A)
 * URL: http://codeforces.ru/contest/230/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    std::vector<std::pair<int, int> > v;
    std::string answer = "YES";

    int power = 0, dragons;

    std::cin >> power >> dragons;

    for (int i = 0, key, value; i < dragons; ++i)
    {
        std::cin >> key >> value;
        v.push_back(std::make_pair(key, value));
    }

    std::sort(v.begin(), v.end());

    for (int i = 0; i < dragons; ++i)
    {
        if(power > v[i].first)
        {
            power += v[i].second;
        }
        else
        {
            answer = "NO"; break;
        }
    }

    std::cout << answer << std::endl; return 0;
}
