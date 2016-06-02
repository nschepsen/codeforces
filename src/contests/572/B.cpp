#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Contest: Code Forces Round #317 (Task 572-B)
 * URL: http://codeforces.ru/contest/572/problem/B
 */

typedef struct Order
{
    int price, volume;

    Order(int price, int volume) : price(price), volume(volume) { }

    bool operator==(const int& p) const
    {
        return price == p;
    }

    bool operator<(const Order& other) const
    {
        return price < other.price;
    }

    bool operator>(const Order& other) const
    {
        return price > other.price;
    }
} Order;

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(0);

    int n, s; char type;

    std::cin >> n >> s;

    std::vector<Order> ss, bs;

    for (int i = 0, p, v; i < n; ++i)
    {
        std::cin >> type >> p >> v;

        std::vector<Order>::iterator it;

        if (type == 'B')
        {
            if ((it = std::find(bs.begin(), bs.end(), p)) != bs.end())
            {
                (*it).volume += v;
            }
            else
            {
                bs.push_back(Order(p, v));
            }
        }
        else
        {
            if ((it = std::find(ss.begin(), ss.end(), p)) != ss.end())
            {
                (*it).volume += v;
            }
            else
            {
                ss.push_back(Order(p, v));
            }
        }
    }

    std::sort(bs.begin(), bs.end(), std::greater<Order>());
    std::sort(ss.begin(), ss.end(), std::greater<Order>());

    for (int len = ss.size(), i = ((len < s) ? 0 : len - s); i < len; ++i)
    {
        std::cout << "S " << ss[i].price << " " << ss[i].volume << std::endl;
    }

    for (int i = 0; i < ((bs.size() < s) ? bs.size() : s); ++i)
    {
        std::cout << "B " << bs[i].price << " " << bs[i].volume << std::endl;
    }

    return 0;
}
