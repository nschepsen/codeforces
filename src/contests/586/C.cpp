#include <iostream>
#include <vector>

/*
 * Contest: Code Forces Round #325 (Task 586-C)
 * URL: http://codeforces.ru/contest/586/problem/C
 */

struct Child
{
    int id;

    int v;
    int d;

    long long p;

    Child(int id, int v, int d, long long p) : id(id), v(v), d(d), p(p) { }
};

int main(int argc, char** argv)
{
    std::vector<Child> queue;

    int n; std::cin >> n;
    std::vector<int> ans;

    for (long long i = 1, v, d, p; i <= n; ++i)
    {
        std::cin >> v >> d >> p;
        queue.push_back(Child(i, v, d, p));
    }

    while (!queue.empty())
    {
        std::vector<Child>::iterator it = queue.begin();
        Child served = *it;

        ans.push_back(served.id);

        while ((served.v > 0) && (it != queue.end()))
        {
            (++it)->p -= (served.v--);
        }

        queue.erase(queue.begin());

        for (auto it = queue.begin(); it != queue.end(); ++it)
        {
            if (it->p < 0)
            {
                for (auto jt = it; jt != queue.end(); ++jt)
                {
                    jt->p -= it->d;
                }
            }
        }

        for (auto it = queue.begin(); it != queue.end();)
        {
            it = (it->p < 0) ? queue.erase(it) : it + 1;
        }
    }

    std::cout << ans.size() << std::endl;

    for (int i = 0; i < ans.size(); ++i) { std::cout << ans[i] << " "; }

    std::cout << std::endl; return 0;
}
