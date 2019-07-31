#include <iostream>  // IOstream stands for Input Output stream
#include "point.h"
//#include <> // to include a library!!!!

using namespace std;   // giving a meaning to certain strings like cout, cin. 


// inheratance between classes
//      taking a property/attributes/methods from other classes

void operationOnPoints();

int main()   // function(parameters)
{

    operationOnPoints();

    /*


    /*
    */
    return 0 ;
}


void operationOnPoints()
{
    Point p1; // using the default value of the constructor

    Point p2(10); // giving a  value to the constructor

    cout<<p1.getX()<<endl;   
    cout<<p2.getX()<<endl;   

    Point2D p3(30,90); 
    cout<<p3.getX()<<endl; 
    cout<<p3.getY()<<endl; 
    p3.setY(16);
    cout<<p3.getX()<<endl; 
    cout<<p3.getY()<<endl; 
    p3.setXY(1000,6);
    cout<<p3.getX()<<endl; 
    cout<<p3.getY()<<endl; 
    p3.setX(1);            //using getX from Point2D
    cout<<p3.getX()<<endl; 
    p3.Point::setX(1);            //using getX from Point
    cout<<p3.getX()<<endl; 

    // destruction goes from the sub-class then to the upper-class

}