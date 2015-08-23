#include <iostream>
#include <set>
#include <string>

/*
 * Contest: Code Forces Round #295 (Task 520-A)
 * URL: http://codeforces.ru/contest/520/problem/A
 */

int main(int argc, char** argv)
{
    int n; std::string s; std::cin >> n >> s;
    std::set<int> abc;

    for (const char & ch : s)
    {
        abc.insert(std::tolower(ch));
    }

    std::cout << ((26 == abc.size()) ? "YES" : "NO") << std::endl;
    return 0;
}
