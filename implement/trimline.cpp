#include <algorithm>
#include <functional>
#include <string>
#include <cctype>
#include <locale>
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    std::string line;
     std::string test1="class";
    int i=0;
    char* ws = " \t\n\r\f\v";
    // trim from end (right)
inline std::string& rtrim(std::string& s, const char* t = ws)
{
    s.erase(s.find_last_not_of(t) + 1);
    return s;
}

// trim from beginning (left)
inline std::string& ltrim(std::string& s, const char* t = ws)
{
    s.erase(0, s.find_first_not_of(t));
    return s;
}

// trim from both ends (left & right)
 std::string& trim(std::string& s, const char* t = ws)
{
    return ltrim(rtrim(s, t), t);
}
  ifstream code_File ("Test.txt", ios::in);

	// Load File
	if(code_File.is_open())
{
    
while(getline(code_file,line))
{
    trim(line);
    
            std::cout<<line<<std::endl;
            if(!line.compare(test)){
            	std::string class[i] = class
                std::cout<<"SUCCESS"<<std::endl;
            }
            else{
                std::cout<<"FAIL"<<std::endl;
            }
        
}
      
    }
    myfile.close();

    if(!test.compare("class")){
        std::cout<<"SUCCESS"<<std::endl;
    }
}
