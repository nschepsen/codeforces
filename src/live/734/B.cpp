#include <iostream>

/*
 * Author: nschepsen <git@schepsen.eu>
 * ID: Codeforces Round #379 (Div. 2)
 * Task: Anton and Digits
 * URL: http://codeforces.ru/contest/734/problem/B
 */

 #define min(a, b) ((a < b) ? a : b)
 #define max(a, b) ((a > b) ? a : b)

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int k[4], a, b;

    std::cin >> k[0] >> k[1] >> k[2] >> k[3];

    a = min(min(k[0], k[2]), k[3]);
    b = min(k[1], max(k[0]- a, 0));

    std::cout << 256 *a + 32 * b << std::endl;

    return EXIT_SUCCESS;
}
