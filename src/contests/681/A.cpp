#include <iostream>
#include <string>

/*
 * Contest: Code Forces Round #357 (Task 681-A)
 * URL: http://codeforces.ru/contest/681/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    std::string name, answer = "NO";

    int n, before, after; std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        std::cin >> name >> before >> after;

        if((before >= 2400) && (after > before))
        {
            answer = "YES"; break;
        }
    }

    std::cout << answer << std::endl; return 0;
}
