#include <iostream>  // IOstream stands for Input Output stream
#include "integer.h"
//#include <> // to include a library!!!!

using namespace std;   // giving a meaning to certain strings like cout, cin. 


// Convert constructor - overloading operators

int main()   // function(parameters)
{
    // Imagine the problem
    int a = 10; int b = 20;
    cout<< a+b <<endl; // standard
    
    int c = 10; double d = 20;
    cout<< c+d <<endl; // confusing because they are from different type
                       // which type should the result should be of??
                       // it is specified somewhere....

    string text1 = "lala"; // lala \0
    string text2 = text1+"second string"; // there is a plus operator for strings
    cout<< text2<<endl;
        
    Integer aa(50);                 // our integer, define explicitly
    cout<< aa.getNr() <<endl;
    int bb=50;                      // c++ integer
    //bb=aa // doesn't work if you don't define the operator

    aa =100;    // works because of the  the compare constructor, defined implicitly
    cout<< aa.getNr() <<endl;

    // explicit way
    int cc = (int) aa; // we are casting the instance of the class! but we need to define the casting operator: check the class
    cout<<"Value of cc by casting the class integer "<<cc <<endl;

    // implicit way
    int dd = aa; // we are casting the instance of the class! but we need to define the casting operator: check the class
    cout<<"Value of dd by casting the class integer "<<dd <<endl;

    cout<<"Sum: " << aa+dd<<endl;  // know because of the casting, does it implicitly

    dd = 70;
    //
    aa +=dd ; //aa = aa + dd;   // you need to define the operator +=
    cout<<"aa+=: " <<aa.getNr()<<endl; 

    /*


    /*
    */
    return 0 ;
}

