
#include "/home/alok/Desktop/Project/MtechRead/mtechxml.hpp"
#include <iostream>
#include <array>
#include <string>    // String manipulating library
#include <iomanip>   // Std manipulations functions library
#include <fstream>   // Contains file stream processing type
#include <cstdlib>   // Exit function prototype	
#include <stdexcept> // Throw error 

using namespace std;
using namespace mtech;
class readFile;
const char* node_types[] =
{
    "null", "document", "element", "pcdata", "cdata", "comment", "pi", "declaration"
};     
 
ofstream outFile("Test.txt", ios::binary);

/*
	if( !outFile )
		{
	cerr << "Error in opening file" << endl;
	exit(EXIT_FAILURE); 
 		} 		
*/// tag::impl[]
struct simple_walker: xml_tree_walker
{
    virtual bool for_each(xml_node& node)
    {
        for (int i = 0; i < depth(); ++i) 
	
	//cout << "  "; // indentation

       // nodeArray[walker._depth] node_types[node.type()];
       //node[walker._depth] = node.name();
       //value[walker._depth] = node.value();   
       // cout << node_types[node.type()];
       // cout << "\n";
       // cout << ": name='";
       // cout << node.name();
       // cout << "', value='";
       // cout << node.value();
       // cout << "'\n";
	//cout << nodeArray;
        //cout << node;
	//cout << value;
outFile << node_types[node.type()] << "\n"  /*<< ": name='" */<< node.name() /*<< "', value='"*/ << node.value() /*<< "'\n"*/ <<endl;
return true; // continue traversal
    }
};
// end::impl[]

int main()
{
    xml_document doc;
    if (!doc.load_file("/home/alok/Desktop/Test/test.xml")) return -1;

    // tag::traverse[]
    simple_walker walker;
    doc.traverse(walker);
    // end::traverse[]}

}
// vim:et

