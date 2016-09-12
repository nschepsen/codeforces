#include <iostream>
#include <string>
#include <map>
#include <cstdio>

/*
 * Contest: Code Forces Round #357 (Task 681-C)
 * URL: http://codeforces.ru/contest/681/problem/C
 */

int QUERIES = 0;

inline void insert(std::map<int, int>& heap, int x, std::string& logs)
{
    if(heap.count(x))
    {
        heap[x]++;
    }
    else
    {
        heap[x] = 1;
    }

    logs.append("insert " + std::to_string(x) + "\n"); QUERIES++;
}

inline void removeMin(std::map<int, int>& heap, std::string& logs)
{
    if((*heap.begin()).second > 1)
    {
        (*heap.begin()).second--;
    }
    else
    {
        heap.erase(heap.begin());
    }

    logs.append("removeMin\n"); QUERIES++;
}

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false); std::string command, logs;

    int n; std::cin >> n;

    std::map<int, int> heap;

    for (int i = 0, operand; i < n; ++i)
    {
        std::cin >> command;

        if(!command.compare("removeMin"))
        {
            if(!heap.empty())
            {
                removeMin(heap, logs);
            }
            else
            {
                logs.append("insert 1\n");

                QUERIES += 2;

                logs.append("removeMin\n");
            }
        }
        else if(!command.compare("getMin"))
        {
            std::cin >> operand;

            while(!heap.empty() && operand > (*heap.begin()).first)
            {
                for (int a = 0; a < (*heap.begin()).second; ++a)
                {
                    logs.append("removeMin\n"); QUERIES++;
                }

                heap.erase(heap.begin());
            }

            if(heap.empty() || operand < (*heap.begin()).first )
            {
                insert(heap, operand, logs);
            }

            logs.append(command + " " + std::to_string(operand) + "\n"); QUERIES++;
        }
        else
        {
            std::cin >> operand; insert(heap, operand, logs);
        }
    }

    std::cout << QUERIES << "\n" << logs; return 0;
}
