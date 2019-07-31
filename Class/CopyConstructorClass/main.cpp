#include <iostream>  // IOstream stands for Input Output stream
#include "test.h"
//#include <> // to include a library!!!!

using namespace std;   // giving a meaning to certain strings like cout, cin. 


// Copy constructor

int main()   // function(parameters)
{
    int a=10;
    int b=a;

    a =60 ; 
    cout<<"a : " << a <<endl;
    cout<<"b : " << b <<endl; // they change value because they are two difference variables
    
    Test obj1(50,100,60);
    Test obj2=obj1; // obj2 is copying the constructor from obj1
                    // defined the copy constructor

   

    cout<<"obj1.x : " << obj1.x << " and obj1.y: "<<obj1.y << " and *(obj1.p) : "<< *(obj1.p)  <<endl;
    cout<<"obj2.x : " << obj2.x << " and obj2.y: "<<obj2.y << " and *(obj2.p) : "<< *(obj2.p) <<endl;

    obj2.x = 2000;
    *(obj2.p) =300;
    
    cout<<"obj1.x : " << obj1.x << " and obj1.y: "<<obj1.y << " and *(obj1.p) : "<< *(obj1.p)  <<endl;
    cout<<"obj2.x : " << obj2.x << " and obj2.y: "<<obj2.y << " and *(obj2.p) : "<< *(obj2.p) <<endl;
    // BEFORE USING COPY CONSTRUCTOR: the value of *(obj1.p) also changed because what is the same 
    //                                between the objects is the address it is pointing to
    //                                obj1.p and obj2.p are the same address

    // to solve this problem we need to create a copy constuctor

    // they change value because they are two difference instances from a class
    /*


    /*
    */
    return 0 ;
}

