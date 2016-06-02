#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

/*
 * Contest: Code Forces Beta Round #4 (Task 4-C)
 * URL: http://codeforces.ru/contest/4/problem/C
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    int n; std::cin >> n;

    std::vector<std::string> v(n);

    for (int i = 0; i < n; ++i) { std::cin >> v[i]; }

    std::unordered_map<std::string, int> umap;

    for (int i = 0; i < n; ++i)
    {
        if (!umap.count(v[i]))
        {
            umap[v[i]] = 0;

            std::cout << "OK" << std::endl;
        }
        else
        {
            umap[v[i]]++;

            std::cout << v[i] << umap[v[i]] << std::endl;
        }

    }

    return 0;
}
