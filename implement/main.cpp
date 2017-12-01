#include <iostream> // Std Library
#include "xmlVector.h" // Include buildRelation.h header implimentation
#include <string> 
using namespace std;

/*typedef std::vector<std::string> fom_header;
typedef std::vector<fom_header> fom_data;

void print_data(fom_data &f)
{
    vector<fom_header>::iterator _header;
    vector<string>::iterator _data;
    for(_header = f.begin(); _header != f.end(); _header++)
    {
        for(_data = _header->begin(); _data != _header->end(); _data++)
        {
            cout<<"data = "<<*_data << '\n';
        }
    }
} */

int main()
{
xmlVector readXmlVector;
readXmlVector.browseFile();
readXmlVector.printVector();
//cout << "Printed Successfully in the file " << endl;
classList classes;
classes.list_classes();
}
