#include <iostream>
#include <time.h>

/*
 * Author: nschepsen <git@schepsen.eu>
 * ID: Codeforces Round # (Div. 2)
 * Task:
 * URL: http://codeforces.ru/contest//problem/
 */

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);

    srand(time(NULL));


    int n; std::cin >> n;

    double *vec = (double *) malloc(n*n*sizeof(double));

    for(long i = 0; i < n; ++i)
        {
            for(long j = 0; j < n; ++j) vec[i*n + j] = rand() % 1000;
        }

double sum = 0;

        for(long i = 0; i < n; ++i)
            {
                for(long j = 0; j < n; ++j) sum+=vec[i*n + j];
            }


std::cout << "sum: " << sum << std::endl;

free(vec);
    return EXIT_SUCCESS;
}
