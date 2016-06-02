#include <iostream>
#include <deque>

/*
 * Contest: Code Forces Round #304 (Task 546-A)
 * URL: http://codeforces.ru/contest/546/problem/A
 */

int main(int argc, char** argv)
{
    int n, p1c, p2c, rounds = 0, counter = 0;

    std::cin >> n >> p1c;

    std::deque<int> p1(p1c);

    for (int i = 0; i < p1c; ++i) { std::cin >> p1[i]; }

    std::cin >> p2c;

    std::deque<int> p2(p2c);

    for (int i = 0; i < p2c; ++i) { std::cin >> p2[i]; }

    while(!p1.empty() && !p2.empty())
    {
        int a = p1.front(); p1.pop_front();
        int b = p2.front(); p2.pop_front();

        rounds++;

        if(a > b)
        {
            p1.push_back(b); p1.push_back(a);
        }
        else
        {
            p2.push_back(a); p2.push_back(b);
        }

        if((++counter) > 106)
        {
            std::cout << -1 << std::endl; return 0;
        }
    }

    std::cout << rounds << " " << ((p1.empty()) ? 2 : 1) << std::endl;

    return 0;
}
