#include <iostream>
#include <cmath>
#include <string>
#include <vector>

/*
 * Contest: Code Forces Round #256 (Task 448-A)
 * URL: http://codeforces.ru/contest/448/problem/A
 */

#define get(v, x) std::ceil((v[0] + v[1] + v[2]) / x)

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    std::vector<double> a(3), b(3);
    std::string answer = "NO";

    int n, r;

    std::cin >> a[0] >> a[1] >> a[2] >> b[0] >> b[1] >> b[2] >> n;

    if (n >= (r = (get(a, 5) + get(b, 10))))
    {
        answer = "YES";
    }

    std::cout << answer << std::endl;
    return 0;
}
