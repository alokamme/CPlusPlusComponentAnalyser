
//#include "/home/alok/Desktop/Project/MtechRead/mtechxml.hpp"
#include <iostream> // Std library 
#include <string>   // String manipulating library
#include <fstream>  // Contains file stream processing types
#include <vector>   // Vector template library
//#include <iomanip>  // Std manipulation functions library
//#include <cstdlib>  // Exit function prototype
//#include <stdexcept>// Throw exception handling
#include "xmlVector.h" 
using namespace std; 
void xmlVector::browseFile() // Create vector from parsed data
{
vector_str vect;

//ifstream constructor to open file 
ifstream code_File ("Test.txt", ios::in);
	 while (getline(code_File, line))
	 {
		 // read a line and only enter the loop if it succeeds 
             vect.push_back(line);   // add the line to the vector

	}
     	}
	
	

void xmlVector::printVector() // Print values in vector_str
{
	for (string s : vect)
	{ 
	cout << s << endl;
	}
}
	


string classList::list_classes()
{
	for (str_it = vector_str.begin(); str_it !=vector_str.end(); str_it++)
	 {
     		        temp = &str_it;
   		        string element1 = "element";
                  if(*temp.compare(element1) == 0){
                        
                        str_it = begin()+1;
                  	  temp = &str_it;
                  	string element2 = "class";		  
		  if(*temp.compare(element2) == 0){
		        
		        str_it = begin()+2;
		          temp = &str_it;
		        string element3 = "pcdata";		  
		  if(*temp.compare(element3) == 0){
		         
		         str_it = begin()+3;
		           temp = &str_it;
		         string element4 = "class";		  
		  if(*temp.compare(element4) == 0){
		  
		         str_it = begin()+4;
		           temp = &str_it;
		         string element5 = "element";		  
		  if(*temp.compare(element5) == 0){
		  
		         str_it = begin()+5;
		         temp = &str_it;
		         string element6 = "name";		  
		  if(*temp.compare(element6) == 0){
		  
		         str_it = begin()+6;
		         temp = &str_it;
		         string element7 = "pcdata";		  
		  if(*temp.compare(element7) == 0){		         	  
		         class_name = *temp;
	          cout << "class name = " << class_name;
	          } 
		  }
		  }
		  }
		  }
		  }    
      }
    }
 }	
/*void pattern::pattern_push()
{
class_list.push_back("element");
class_list.push_back("class");
class_list.push_back("pcdata");
class_list.push_back("class");
class_list.push_back("element");
class_list.push_back("name");
class_list.push_back("pcdata");

}*/
