#include <iostream>  // IOstream stands for Input Output stream
//#include <> // to include a library!!!!
#include <cstring>

using namespace std;   // giving a meaning to certain strings like cout, cin. 


// New project
void showHelp(char argv);

int main(int argc, char *argv[])   // function(parameters)
{
    //arguments counter: how many arguments are given to the program!
    //arguments values
  /*
    cout<< argc<<endl; //the executable is already 1
                       //

    cout<< argv[0]<<endl;
    cout<< argv[1]<<endl;
    cout<< argv[2]<<endl;
    */

    for (int i=0; i<argc; i++)
      cout<< argv[i]<<endl;


    char a[]={'a', 'b', 'c', 'd','\0'};
    cout<<a<<endl;
    char *b="this is a test";
    cout<<b<<endl;
    char *c[]={"this", "is", "a", "test test"};
    cout<<c[0]<<endl;
    cout<<c[1]<<endl;
    cout<<c[2]<<endl;
    cout<<c[3]<<endl;

    char x[] = "a";    // name of ARRAY is A POINTER
    char y[] = "a";

    cout<< (x == y ) <<endl; // never true!! checking the address are equal
    cout<< (x[0] == y[0] ) <<endl;

    string sa ="lalala";
    string sb ="lalala";
    cout << (sa == sb) <<endl;
    cout << (strcmp(sa.c_str(),sb.c_str())) <<endl; // strcmp() = 0 - variables are the same,
                                                    //          = 1 - the first string is greater than the other
                                                    //          = -1 - the first string is smaller than the other


    for (int i=0; i <argc; i++)
      if(strcmp(argv[i], "-h")==0 && i==1)
          showHelp(*argv[i]);

    /*


    /*
    */
    return 0 ;
}
void showHelp(char argv)
{
  // Instruction
  cout<< "this is so helpful that you cannot stand it ;) "<< argv<<endl;

}
