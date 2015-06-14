#include <iostream>
#include <vector>

#include <algorithm>

/*
 * Contest: Code Forces Round #97 (Task 136-A)
 * URL: http://codeforces.ru/contest/136/problem/A
 */

template<class T1, class T2> struct compare
{
    bool operator()(const std::pair<T1, T2>& a, const std::pair<T1, T2>& b)
    {
        return  a.first < b.first;
    }
};

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    int guests; std::cin >> guests;
    std::vector< std::pair<int, int> > v(guests);

    for (int i = 0; i < guests; ++i)
    {
        std::cin >> v[i].first; v[i].second = i + 1;
    }

    std::sort(v.begin(), v.end(), compare<int, int>());

    for (int i = 0; i < guests; ++i)
    {
        std::cout << v[i].second << " ";
    }

    return 0;
}
