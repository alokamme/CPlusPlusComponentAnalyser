#include <vector>
#include <string>
#include <iostream>

class render_file
{
public:
    render_words();
    void print_words();
private:
    size_t numberOfLines;
    std::vector<std::string> str;
};
