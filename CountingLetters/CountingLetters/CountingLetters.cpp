#include <iostream>
#include <string>
#include <set>

using namespace std;

string letter_counting(string);

int main()
{
    std::string str = "aaabbcdddddeaa";
    cout << letter_counting(str);
    return 0;
}

string letter_counting(string input)
{
    std::string str;
    std::set<char> set;
    for (auto i : input)
    {
        set.insert(i);
    }

    for (auto i : set)
    {
        int CountLetter = 0;
        for (auto elem : input)
        {
            if (i == elem)
            {
                CountLetter++;
            }
        }
        str += i  + std::to_string(CountLetter);
    }
    return str;
}