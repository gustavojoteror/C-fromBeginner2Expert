#include <iostream>  // IOstream stands for Input Output stream
#include "test.h"
//#include <> // to include a library!!!!

using namespace std;   // giving a meaning to certain strings like cout, cin. 


// friend classes

int main()   // function(parameters)
{

    B objB;
    

    A objA;
    objA.setSecretValue(objB, 600);


    cout<<objB.getSecretValue()<<endl;

    /*


    /*
    */
    return 0 ;
}

