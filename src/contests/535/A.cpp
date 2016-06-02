#include <iostream>
#include <vector>
#include <string>

/*
 * Contest: Code Forces Round #299 (Task 535-A)
 * URL: http://codeforces.ru/contest/535/problem/A
 */

int main(int argc, char** argv)
{
    std::vector<std::string> y =
    {
            "zero",
            "one",
            "two",
            "three",
            "four",
            "five",
            "six",
            "seven",
            "eight",
            "nine",
            "ten",
            "eleven",
            "twelve",
            "thirteen",
            "fourteen",
            "fifteen",
            "sixteen",
            "seventeen",
            "eighteen",
            "nineteen"
    };

    std::vector<std::string> x =
    {
            "",
            "",
            "twenty",
            "thirty",
            "forty",
            "fifty",
            "sixty",
            "seventy",
            "eighty",
            "ninety"
    };


    int n; std::cin >> n;

    std::cout << x[n / 10] << (((n > 20) && (n % 10)) ? "-" : "") << ((n >= 20) ? (!(n % 10) ? "" : y[n % 10]) : y[n % 20]) << std::endl;

    return 0;
}
