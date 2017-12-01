#include "call_api.h"
#include <fstream>
#include <istream>
#include <algorithm> // std::copy
#include <iterator>  // istream_iterator

StringList::StringList()
{
    std::ifstream myfile("Test.txt");
    if (myfile.is_open())
    {
std::copy(istream_iterator<string>(myfile),istream_iterator<string>(),back_inserter(str));
    }
    numberOfLines = str.size();
}

void StringList::PrintWords()
{
    for(size_t i = 0; i < numberOfLines; ++i)
    {
        std::cout << str[i] << std::endl;
    }
}
