#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

/*
 * Contest: Code Forces Round #319 (Task 577-B)
 * URL: http://codeforces.ru/contest/577/problem/B
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    long long n, m;
    std::cin >> n >> m;
    std::vector<long long> v(n);

    for (long long i = 0; i < n; ++i)
    {
        std::cin >> v[i];
    }

    std::sort(v.begin(), v.end());

    std::for_each(v.begin(), v.end(), [m] (long long i)
    {
        if(!( i % m))
        {
            std::cout << "YES" << std::endl; return 0;
        }

    });

    std::map<long long, long long> umap;

    for (int i = 1; i < m; ++i)
    {
        umap[i] = 0;
    }

    for (const auto& e : v)
    {
        umap[m - (e % m)]++;
    }

    for (const auto& e : umap)
    {
        if (e.second == m)
        {
            std::cout << "YES" << std::endl;
            return 0;
        }
    }

    long long cnt = 0;

    for (const auto& e : umap)
    {
        if (e.second > 0)
        {
            cnt++;
            if (cnt >= (m - 1))
            {
                std::cout << "YES" << std::endl;
                return 0;
            }
        }
    }
    long long sum = 0;

    for (const auto& e : umap)
    {

        sum += e.first * e.second;

    }

    if(sum < m) { std::cout << "NO" << std::endl; return 0; }
    if(!(sum % m)) { std::cout << "YES" << std::endl; return 0; }

    sum = sum % m;

    if(umap[sum] > 0) {std::cout << "YES" << std::endl;     return 0; }



    for (const auto& e : umap)
      {

         if(!(m % e.first) && ((m / e.first) >= e.second) ){std::cout << "YES" << std::endl;     return 0;}

      }

    std::map<long long, long long> copy;

    for (int i = 1; i < m; ++i)
    {
        copy[i] = 0;
    }


    for (const auto& e : umap)
      {

        copy[m - (e.first*e.second) % m]++;

      }

    /***//**/


    for (const auto& e : copy)
    {
        if (e.second == m)
        {
            std::cout << "YES" << std::endl;
            return 0;
        }
    }

 cnt = 0;

    for (const auto& e : copy)
    {
        if (e.second > 0)
        {
            cnt++;
            if (cnt >= (m - 1))
            {
                std::cout << "YES" << std::endl;
                return 0;
            }
        }
    }
 sum = 0;

    for (const auto& e : copy)
    {

        sum += e.first * e.second;

    }

    if(sum < m) { std::cout << "NO" << std::endl; return 0; }
    if(!(sum % m)) { std::cout << "YES" << std::endl; return 0; }

    sum = sum % m;

    if(copy[sum] > 0) {std::cout << "YES" << std::endl;     return 0; }



    for (const auto& e : copy)
      {

         if(!(m % e.first) && ((m / e.first) >= e.second) ){std::cout << "YES" << std::endl;     return 0;}

      }


    std::cout << "NO" << std::endl;

    return 0;
}
