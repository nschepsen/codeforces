#include <iostream>
#include <string>
#include <algorithm>

/*
 * Author: nschepsen <git@schepsen.eu>
 * ID: Codeforces Round #379 (Div. 2)
 * Task: Anton and Danik
 * URL: http://codeforces.ru/contest/734/problem/A
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, c;

    std::string s, answer = "Friendship";

    std::cin >> n >> s;

    c = std::count(s.begin(), s.end(), 'A');

    answer = (((c << 1) > n) ? "Anton" : (((c << 1) < n)) ? "Danik" : answer);

    std::cout << answer << std::endl; return 0;
}
