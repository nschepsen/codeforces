#include <iostream>

#include <string>
#include <set>
#include <vector>

/*
 * Contest: Code Forces Round #302 (Task 544-A)
 * URL: http://codeforces.ru/contest/544/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    std::set<char> chars;
    std::string str;
    std::vector<int> v;

    int k; std::cin >> k >> str;

    if (k <= str.length())
    {
        for (int i = 0, remains = k; i < str.length(); ++i)
        {
            if (chars.count(str[i]) == 0)
            {
                if (remains <= 0) break;
                else
                {
                    chars.insert(str[i]);
                    v.push_back(i);

                    remains = remains - 1;
                }
            }
        }

        if (v.size() == k)
        {
            v.push_back(str.length());
            std::cout << "YES" << std::endl;

            for (int i = 0; i < k; ++i)
            {
                std::cout << str.substr(v[i], v[i + 1] - v[i]) << std::endl;
            }
        }
        else
        {
            std::cout << "NO" << std::endl;
        }
    }
    else
    {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
