#include "point.h" 
#include <iostream>  // IOstream stands for Input Output stream
using namespace std; 

Point::Point(int x)
{
    this->x=x;
    cout<< "The constructor from the Point class has just been invoked" <<endl;
}
Point::~Point()
{
    cout<< "The destructor from the Point class has just been invoked" <<endl;
}

void Point::setX(int x)
{
    this->x=x;
    cout<< "setX() from Point" <<endl;
}
/*Point Point::operator+(Point p)
{
    this->x = this->x+p.x;
    Point tmp = this;
    return tmp;
}*/

/*
Point2D::Point2D(int x, int y)
{
    this->x=x; 
    this->y=y;
    cout<< "The constructor of the subclass, Point2D has just been invoked" <<endl;
}
*/
Point2D::Point2D(int x, int y) : Point(x) //inhereting the constructor from Point
{
    this->y=y;
    cout<< "The constructor of the subclass, Point2D has just been invoked" <<endl;
}

Point2D::~Point2D()
{
    cout<< "The destructor of the subclass, Point2D has just been invoked" <<endl;
}

void Point2D::setX(int x)
{
    this->x=x;
    cout<< "setX() from Point2D" <<endl;
}

void Point2D::setY(int y)
{
    this->y=y;
}
void Point2D::setXY(int x,int y)
{
    setX(x);            //using the  inhereted method from Point
    setY(y);
    // this->x=x; this->y=y; 
                //this is shit because then if you change something in setX or setY then 

}
Point2D Point2D::operator+(Point2D p)
{
    Point2D tmp ;    
    tmp.x = this->x+p.x;
    tmp.y = this->y+p.y;
    cout<< "Using the Point2D plus operator" <<endl;
    return tmp;
}

Point3D::Point3D(int x, int y, int z) : Point2D(x,y) //inhereting the constructor from Point
{
    this->z=z;
    cout<< "The constructor of the sub-subclass, Point3D has just been invoked" <<endl;
}

Point3D::~Point3D()
{
    cout<< "The destructor of the sub-subclass, Point3D  has just been invoked" <<endl;
}