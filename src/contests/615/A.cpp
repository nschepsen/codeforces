#include <iostream>
#include <unordered_set>

/*
 * Contest: Code Forces Round #338 (Task 615-A)
 * URL: http://codeforces.ru/contest/615/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, m; std::cin >> n >> m;

    std::unordered_set<int> set;

    for (int i = 0, c; i < n; ++i)
    {
        std::cin >> c;

        for(int j = 0, num; j < c; ++j)
        {
            std::cin >> num;

            set.insert(num);
        }
    }

    std::cout << ((set.size() == m) ? "YES" : "NO") << std::endl;

    return 0;
}
