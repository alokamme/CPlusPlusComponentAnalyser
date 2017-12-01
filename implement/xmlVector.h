#include <iostream>
#include <string>   // String manipulating library
#include <fstream>  // Contains file stream processing types
#include <vector>   // Vector template library
//#include <iomanip>  // Std manipulation functions library
//#include <cstdlib>  // Exit function prototype
//#include <stdexcept>// Throw exception handling
//#include <algorithm> // STL Algorithm library
//#include <iterator> // Iterator
using namespace std;

class xmlVector
{
public:
void browseFile(); // Read file and load it to vector
void printVector(); // Print loaded vector iterator  
typedef vector < string > vector_str; // Define vector to store the File.
vector<string>::iterator vec_it; // used in traversal at classList::list_classes
vector<string>::iterator str_it; // used in traversal at classList::list_classes

public: 
 string line;
 string class_name;
 string str1;
 string str2;
 string *temp;
 
};
/*******************CLASS *****************/
/*class pattern
{
public:
vector < string > class_list;
vector < string > memfn_list;
vector < string > variable_list;
void pattern_push();
};*/

/************CLASS *************/

class classList : public xmlVector, public pattern
{

public:
     string list_classes();
     
     
  
     
};
   
