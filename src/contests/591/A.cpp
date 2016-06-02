#include <cstdio>

/*
 * Contest: Code Forces Round #327 (Task 591-A)
 * URL: http://codeforces.ru/contest/591/problem/A
 */

int main(int argc, char** argv)
{
    int l, p, q; scanf("%d %d %d", &l, &p, &q);
    printf("%.4lf\n", (double) l * p / (p + q));

    return 0;
}
