#include <iostream>
#include <string>
#include <vector>

/*
 * Contest: Code Forces Round #202 (Task 349-A)
 * URL: http://codeforces.ru/contest/349/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    int n, m25 = 0, m50 = 0;

    std::string answer = "YES";

    std::cin >> n; std::vector<int> v;

    for (int i = 0, input; i < n; ++i)
    {
        std::cin >> input;

        if (input > 25)
        {
            if (input == 50)
            {
                if ((--m25) < 0) { answer = "NO"; break; } else { m50++; }
            }
            else
            {
                if ((m50 > 0) && (m25 > 0))
                {
                    m25--; m50--;
                }
                else if (m25 >= 3)
                {
                    m25 -= 3;
                }
                else { answer = "NO"; break; }
            }
        }
        else { m25++; }
    }

    std::cout << answer << std::endl; return 0;
}
