#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <ctime>

/*
 * Contest: Code Forces Round #323 (Task 583-D)
 * URL: http://codeforces.ru/contest/583/problem/D
 */

int
gcd ( int a, int b )
{
  int c;
  while ( a != 0 ) {
     c = a; a = b%a;  b = c;
  }
  return b;
}

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    std::srand(std::time(0));

    int n =atoi(argv[1]);
    std::vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {

        //std::cin >> v[i];
        v[i] = std::rand() % 2000; // std::cout << v[i] << " ";


    }

    std::vector<std::vector<int> > t(n, std::vector<int>(n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
           t[i][j] = gcd(v[i], v[j]);

        }
    }


//    std::cout << "\n---------------" << std::endl;
//
//    for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < n; ++j) {
//             std::cout << t[i][j] <<  " ";
//         } std::cout  << std::endl;
//     }


//    std::cout << "\n---------------" << std::endl;

    std::cout << v.size() << " ";

    for (int i = 0; i < n; ++i) {
          for (int j = 0; j < n; ++j) {
              std::cout << t[i][j] <<  " ";
          }
      }

    std::cout  << std::endl;

    return 0;
}
