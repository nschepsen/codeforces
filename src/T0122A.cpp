#include <iostream>
#include <string>

/*
 * Contest: Code Forces Round #91 (Task 122-A)
 * URL: http://codeforces.ru/contest/122/problem/A
 */

bool check(int n)
{
    while (n > 0)
    {
        if ((n % 10 != 4) && (n % 10 != 7)) return 0; else n /= 10;
    }

    return true;
}

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    std::string result = "NO";
    int n; std::cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        if(check(i) && !(n % i))
        {
            result ="YES"; break;
        }
    }

    std::cout << result << std::endl;
    return 0;
}
