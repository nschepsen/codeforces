#include <iostream>
#include <string>

/*
 * Author: nschepsen <git@schepsen.eu>
 * ID: Codeforces Round #404 (Div. 2)
 * Task: Anton and Polyhedrons
 * URL: http://codeforces.ru/contest/785/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, faces = 0;

    std::cin >> n; std::string s;

    for(size_t i = 0; i < n; ++i)
    {
        std::cin >> s;

        switch (s[0])
        {
            case 'T':
                faces += 4;
                break;
            case 'C':
                faces += 6;
                break;
            case 'O':
                faces += 8;
                break;
            case 'D':
                faces += 12;
                break;
            default:
                faces += 20;
        }
    }

    std::cout << faces << std::endl; return 0;
}
