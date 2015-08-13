#include <iostream>
#include <string>

/*
 * Contest: Code Forces Round #271 (Task 474-A)
 * URL: http://codeforces.ru/contest/474/problem/A
 */

int main(int argc, char** argv)
{
    std::string kb = "qwertyuiopasdfghjkl;zxcvbnm,./";
    std::string r, msg; std::cin >> r >> msg;

    int offset = (r == "R") ? -1 : 1;

    for (auto it = msg.begin(); it != msg.end(); ++it)
    {
        *it = *(kb.begin() + kb.find(*it) + offset);
    }

    std::cout << msg << std::endl; return 0;
}
