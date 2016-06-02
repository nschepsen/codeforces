#include <iostream>
#include <string>
#include <sstream>

/*
 * Contest: Code Forces Round #324 (Task 584-A)
 * URL: http://codeforces.ru/contest/584/problem/A
 */

#define tostring(i, s, ss) std::stringstream ss; ss << i; ss >> s;

int main(int argc, char** argv)
{
    int n, t; std::cin >> n >> t;

    std::string ans = "-1";

    if((n != 1) || (t != 10))
    {
        tostring(t, ans, ss);

        while(ans.length() < n) { ans += "0"; }
    }

    std::cout << ans << std::endl; return 0;
}
