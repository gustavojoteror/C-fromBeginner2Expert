#include <iostream>  // IOstream stands for Input Output stream
#include "point_template.h"
//#include <> // to include a library!!!!

using namespace std;   // giving a meaning to certain strings like cout, cin. 


// function and class template

void operationOnPoints();

//Adding function
int    add(int    var1, int var2)   {return var1+var2;};
double add(double var1, double var2){return var1+var2;};
double add(int    var1, double var2){return var1+var2;}; // all the possibilities
double add(double var1, int    var2){return var1+var2;};
// annoying, we had to write 4 functions for that!!

//          function template: generalization of functions:
template<typename T, typename T2>  //T is the name I have put
T add_template(T var1, T2 var2){return var1+var2;};//two variables need to be from the same type
/*template<typename T>
T add_template(T var1, T var2){return var1+var2;};  *///all variables need to be from the same type

//the syntax is important: 
//template<typename T> ENTER (NO SEMICOLON ;)
//T function(T var1)

// defining the add for Point2D..... but this is not generic! 
//                                  More generic with the plus operator inside the class
//                                  Also we use one function for all types
/*Point2D add_template(Point2D var1, Point2D var2)
{
    Point2D tmp;
    tmp.setX(var1.getX()+var2.getX());
    tmp.setY(var1.getY()+var2.getY());
    cout<< "Using the Global function " <<endl;
    return tmp;
    
}*/

typedef Point<int> PointInt;  // making an alias to Point<int>
typedef Point2D<int> Point2DInt;  // making an alias to Point<int>
int main()   // function(parameters)
{


    cout<< add(2,5)<<endl;
    //What if we send a double
    
    cout<< add(2.0,5.5)<<endl; //still will use it as int, unless we overload the function
    //cout<< add(2,5.5)<<endl; // doesn't know which function to use: add(int,double);
    cout<< add((double)2,5.5) <<endl;

    cout<<"With template function1"<<endl;
    cout<<add_template<double,double>(2,5)<<endl;
    cout<<add_template<double,double>(2.1,5)<<endl;
    cout<<add_template<double,double>(2,5.5)<<endl;


    operationOnPoints();

    /*


    /*
    */
    return 0 ;
}


void operationOnPoints()
{
/*
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
*/


    //&*()*&^%^&*()(*&^%$%^&*()(*&^%$##$%^&*()(*&^%$#$%^&*())))
    // function template
/*
    Point2D p1(10,67);
    Point2D p2(50,12);
// sum        (60,79);
    Point2D p3=add_template(p1,p2);
    cout<<p3.getX()<<endl; 
    cout<<p3.getY()<<endl;
*/

    //&*()*&^%^&*()(*&^%$%^&*()(*&^%$##$%^&*()(*&^%$#$%^&*())))
    // class template
    Point<int> a(5);       // need to specify the type T
    cout<<a.getX()<<endl;
    cout<<endl;
    cout<<endl;
// or using the typedef above
    PointInt b(8);
    cout<<b.getX()<<endl;
    cout<<endl;
    cout<<endl;
    Point<double> c(5.679);       // need to specify the type T
    cout<<c.getX()<<endl;

    cout<<endl;
    cout<<endl;
    Point2DInt d(5,6);
    cout<<d.getX()<<"<-- x and y-->"<<d.getY()<<endl;

    cout<<endl;
    cout<<endl;
    Point2D<double> e(5.5534,6.23121);
    cout<<e.getX()<<"<-- x and y-->"<<e.getY()<<endl;

    cout<<endl;
    cout<<endl;
    // special template in case the type is ... (this case char)
    Point<char> f(5);

    // special template in case the type is ... (this case pointer)
    cout<<endl;
    cout<<endl;
    Point<int*> g(5);
    cout<<endl;
    cout<<endl;



}