#include<iostream>
#include<string>
#include<vector>
using namespace std;
typedef std::vector<std::string> fom_header;
typedef std::vector<fom_header> fom_data;
string str ("person");

void print_data(fom_data &f)
{
    vector<fom_header>::iterator _header;
    vector<string>::iterator _data;
    for(_header = f.begin(); _header != f.end(); _header++)
    {
        for(_data = _header->begin(); _data != _header->end(); _data++)
        {
        
        if (str.compare(*_data) == 0)
          {  cout<<"True"; // <<*_data;
        }
        }
    }
}


int main()
{	
	
	fom_header fom_header1;
	fom_data fom_data1;
    fom_header1.push_back("element");
    fom_header1.push_back("class");
    fom_header1.push_back("pcdata");
    fom_header1.push_back("class");
    fom_header1.push_back("element");
    fom_header1.push_back("name");
    fom_header1.push_back("person");
    fom_data1.push_back(fom_header1);

  /*  fom_header1.push_back("B");
    fom_header1.push_back("30");
    fom_header1.push_back("40");
    fom_header1.push_back("50");
    fom_data1.push_back(fom_header1); */

    print_data(fom_data1);

}
