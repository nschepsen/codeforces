#include <iostream>
#include <map>
#include <string>

/*
 * Contest: Code Forces Round #204 (Task 352-A)
 * URL: http://codeforces.ru/contest/352/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n; std::cin >> n;

    std::map<int, int> m;

    std::string answer = "";

    for (int i = 0, x; i < n; ++i)
    {
        std::cin >> x; m[x]++;
    }

    if(m.count(0) > 0)
    {
        while((m[5]-= 9) >= 0)
        {
            answer.append("555555555");
        }

        if(answer.length() == 0)
        {
            answer.append("0");
        }
        else
        {
            while(m[0]-- > 0) answer.append("0");
        }
    }
    else
    {
       answer = "-1";
    }

    std::cout << answer << std::endl; return 0;
}
