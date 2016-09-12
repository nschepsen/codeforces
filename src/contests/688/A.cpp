#include <iostream>
#include <string>

/*
 * Contest: Code Forces Round #360 (Task 688-A)
 * URL: http://codeforces.ru/contest/688/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, d, answer = 0, row = 0;

    std::cin >> n >> d;

    std::string s;

    for (int i = 0; i < d; ++i)
    {
        int count = 0;

        std::cin >> s;

        for (int index = 0; index < n; ++index)
        {
            if(s[index] == '0')
            {
                count++; break;
            }
        }

        answer = std::max(answer, (row = (count ? row + 1 : 0)));
    }


    std::cout << answer << std::endl; return 0;
}
