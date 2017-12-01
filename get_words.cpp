#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <string>
using namespace std;
int main()
{
    string element1, element2, element3, element4, element5, element6, element7, class_name;
    std::fstream myFile("Test.txt");
    if (myFile.is_open())
    {
        std::istream_iterator<std::string> iter(myFile), end;
        std::vector<std::string> str(iter, end);

        // print contents
        for (size_t i = 0; i < str.size(); i++)
               {               
                             // temp = &str_it;
   	             element1 = "element";
   	             
                  if(str[i].compare(element1)==0){
                             i++;                        
                        //str_it = begin()+1;
                  	  //temp = &str_it;
                  	element2 = "class";		  
		  if(str[i].compare(element2) == 0){
		            i++;
		        //str_it = begin()+2;
		          //temp = &str_it;
		        element3 = "pcdata";		  
		  if(str[i].compare(element3) == 0){
		            i++;
		         //str_it = begin()+3;
		           //temp = &str_it;
		         element4 = "class";		  
		  if(str[i].compare(element4) == 0){
		           i++;
		         //str_it = begin()+4;
		           //temp = &str_it;
		         element5 = "element";		  
		  if(str[i].compare(element5) == 0){
		 	   i++;	 
		         //str_it = begin()+5;
		         //temp = &str_it;
		         element6 = "name";		  
		  if(str[i].compare(element6) == 0){
		  	   i++;
		         //str_it = begin()+6;
		         //temp = &str_it;
		          element7 = "pcdata";		  
		  if(str[i].compare(element7) == 0){		         	  
		           i++;
		         class_name = str[i];
	          std::cout << "class name = " << class_name << std::endl;
	          } 
		  }
		  }
		  }
		  }
		  }    
                  }
           // std::cout << i << ": " << str[i] << std::endl;
            }
    }
}
