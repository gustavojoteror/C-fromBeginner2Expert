#include <iostream>  // IOstream stands for Input Output stream
#include "user.h"
//#include <> // to include a library!!!!

using namespace std;   // giving a meaning to certain strings like cout, cin. 

// static properties and static methods for classes
//      a static property of a class means that all instance of that class will
//          have the same value
//      by adding static to a variable then the variable is shared by all instances
//      by addid static to a method then the method is accessible without instances

int main()   // function(parameters)
{

    User a;
    User b;
    cout<<a.getID()<<endl;
    cout<<b.getID()<<endl;

    User c[10];
    cout<<c[7].getID()<<endl;
    cout<<User::getCounter()<<endl;

    /*


    /*
    */
    return 0 ;
}

