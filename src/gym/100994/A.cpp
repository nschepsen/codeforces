#include <iostream>
#include <string>
#include <unordered_set>

/*
 * Contest: Russian Code Cup 2016 (Task A) Warm Up
 * URL: http://codeforces.com/gym/100994/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    std::string code, s; int n, a, b;

    std::cin >> code >> n;

    std::unordered_set<char> lib(code.begin(), code.end());

    for (int i = 0; i < n; ++i)
    {
        std::cin >> s; a = 0; b = 0;

        for(int j = 0; j < code.length(); ++j)
        {
            if(code[j] == s[j]) a++;
            if(lib.count(s[j]) &&  code[j] != s[j]) b++;
        }

        std::cout << a << " " << b << std::endl;
    }

    return 0;
}
