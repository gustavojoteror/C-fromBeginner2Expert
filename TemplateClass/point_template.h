//header file for the new class
#ifndef POINTTEMPLATE_H_INCLUDED  
#define POINTTEMPLATE_H_INCLUDED
//NEEDED FOR THE TEMPLATE:
// include iostream
// using namespace
// definition of the methods (due to reference problem to typename T)
// always before method: template<typename T> 
// also the name of the class when defining: Point<T>
// now the name of the class type is: className<T>  (very important)
#include <iostream>  // IOstream stands for Input Output stream
using namespace std; 


//template of class
template<typename T> // T is simple the name of the type
class Point // base class or parent class or super class
{
    protected:  //private for the main but it can be inherited to the class Point2D
        //char b;   // always will be character!
        T x;
    public:   
        Point(T =0);  // giving a defualt value for the integer in the constructor
        ~Point();
        T getX() ; //{return x;};
        void setX(T);  
        Point operator+(Point);
       
};
template<typename T> 
Point<T>::Point(T x)
{
    this->x=x;
    cout<< "The constructor from the Point class has just been invoked" <<endl;
}
template<typename T> 
T Point<T>::getX() 
{
    return this->x;
}

template<typename T> 
Point<T>::~Point()
{
    cout<< "The destructor from the Point class has just been invoked" <<endl;
}
template<typename T> 
void Point<T>::setX(T x)
{
    this->x=x;
    cout<< "setX() from Point" <<endl;
}
template<typename T> 
Point<T> Point<T>::operator+(Point<T> p)
{
    Point tmp; 
    tmp.x = this->getX()+p.getX();
    return tmp;
}
//-------------------------
// special case for specific method given a type, e.g. double
template<>
double Point<double>::getX()   // specilized function
{
    cout<<"This function will be executed only when the type is double"<<endl;
    return this->x;
}
//-------------------------
// special case for template class, do something special if the given type is " ", e.g. char (could be whatever type here we just choose char)
template<>
class Point<char>
{
    public:
        Point(char a){cout<< "This is when the type given to point<char> is a characters"<<endl;};
};

//-------------------------
// another special case for template class, do something special if the given type is a pointer
template<typename K>   // you can name it what ever K in this case,
class Point<K*>
{
    public:
        Point(K a=0) { cout<<"You can't you use pointer here"<<endl;};

};

// ************************************************************
// let use inheretance so we do not need to repeat the same methods
template<typename T> 
class Point2D : public Point<T>// derived class or child class or sub class
            //the parent class constructor is always called before
{           //when is public we take only the things in public without the constructor and destructor
    protected:
        T y;   // we inhereted x
    public:   
        Point2D(T =0, T =0);  // giving a defualt value for the integer in the constructor
        ~Point2D();
        T getY() {return y;};
        void setY(T); 
        void setX(T);   // we can also re-define a method from an inhereted method
                        // we can still access the original method
        void setXY(T,T); 
        Point2D operator+(Point2D);

};
template<typename T> 
Point2D<T>::Point2D(T x, T y) : Point<T>(x) //inhereting the constructor from Point
{
    this->y=y;
    cout<< "The constructor of the subclass, Point2D has just been invoked" <<endl;
}
template<typename T> 
Point2D<T>::~Point2D()
{
    cout<< "The destructor of the subclass, Point2D has just been invoked" <<endl;
}
template<typename T> 
void Point2D<T>::setX(T x)
{
    this->x=x;
    cout<< "setX() from Point2D" <<endl;
}
template<typename T> 
void Point2D<T>::setY(T y)
{
    this->y=y;
}
template<typename T> 
void Point2D<T>::setXY(T x,T y)
{
    setX(x);            //using the  inhereted method from Point
    setY(y);
    // this->x=x; this->y=y; 
                //this is shit because then if you change something in setX or setY then 

}
template<typename T> 
Point2D<T> Point2D<T>::operator+(Point2D p) //could also be Point2D<T> but compiler is smart enough
{
    Point2D tmp ;     //could also be Point2D<T> but compiler is smart enough
    tmp.x = this->x+p.x;
    tmp.y = this->y+p.y;
    cout<< "Using the Point2D plus operator" <<endl;
    return tmp;
}

/*
class Point3D : public Point2D
{           //when is public we take only the things in public without the constructor and destructor
    protected:
        int z;   // we inhereted x and y from point and point2D respectively
    public:   
        Point3D(int =0,int =0,int =0);  // giving a defualt value for the integer in the constructor
        ~Point3D();

       
};
*/

#endif // POINTTEMPLATE_H_INCLUDED