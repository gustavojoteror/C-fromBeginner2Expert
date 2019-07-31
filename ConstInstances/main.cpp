#include <iostream>  // IOstream stands for Input Output stream
#include "position.h"
//#include <> // to include a library!!!!

using namespace std;   // giving a meaning to certain strings like cout, cin. 


// const instance and const method

int main()   // function(parameters)
{

    // Animal can moved
    Position dog(4,3);
    dog.getPosition();
    dog.setPosition(6,5);
    dog.getPosition();    

    // House cannot moved: we want to make the position constant
    const Position house(100,200); // this is making all atribute of house constant: 
                                     //the methods will not work! Doesn't compile
                                     // in order to make the method working the work
                                    // const must be added after the method
 
    house.getPosition();
    //house.setPosition(6,5);  // this method should not work for const because the house cannot move
    

    /*


    /*
    */
    return 0 ;
}

