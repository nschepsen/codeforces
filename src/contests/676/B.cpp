#include <iostream>
#include <cmath>
#include <vector>

/*
 * Contest: Code Forces Round #354 (Task 676-B)
 * URL: http://codeforces.ru/contest/676/problem/B
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    int n, t, l; std::cin >> n >> t;

    l = std::log2(t + 1);
//    std::vector<std::vector<double> > v(n + 1, std::vector<double>(n + 1, 0));
//
//    v[0][0] = t;
//
//    for (int i = 0; i < n; ++i)
//    {
//        for (int j = 0; j <= i; ++j)
//        {
//         //   std::cout << "i: " << i << "; j: " << j << "; V = " << v[i][j] <<std::endl;
//            if(v[i][j] >= 1)
//            {
//                v[i + 1][j] += (v[i][j] - 1) / 2;
//                v[i + 1][j + 1] += (v[i][j] - 1) / 2;
//                count++;
//            }
//
//        }
//    }

//    std::cout << count << std::endl; return 0;
    l = std::min(n, (int)  std::log2(t + 1));
    std::cout << (l * (l+1) / 2) << std::endl;
}
