#include <iostream>
#include <string>

/*
 * Contest: Code Forces Round #305 (Task 548-A)
 * URL: http://codeforces.ru/contest/548/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    std::string m, answer = "NO";

    int k; std::cin >> m >> k;

    if(!(m.length() % k))
    {
        for (int i = 0, len = m.length() / k; i < k; ++i)
        {
            std::string word(m.substr(i * len, len));

            if(word.compare(std::string(word.rbegin(), word.rend())))
            {
                break;
            }

            if(i == k - 1) answer = "YES";
        }
    }

    std::cout << answer << std::endl; return 0;
}
