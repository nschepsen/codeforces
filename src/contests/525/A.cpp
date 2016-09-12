#include <iostream>
#include <map>
#include <string>

/*
 * Contest: Code Forces Round #297 (Task 525-A)
 * URL: http://codeforces.ru/contest/525/problem/A
 */

int main(int argc, char** argv)
{
    std::string s; int n, answer = 0;

    std::cin >> n >> s;

    std::map<char, int> keys;

    for (int i = 0; i < s.length(); ++i)
    {
        if(i & 1)
        {
            if(keys[s[i]] == 0)
            {
                answer++;
            }
            else
            {
                keys[s[i]] = std::max(0, keys[s[i]] - 1);
            }
        }
        else
        {
            keys[s[i] - 32]++;
        }
    }

    std::cout << answer << std::endl; return 0;
}
