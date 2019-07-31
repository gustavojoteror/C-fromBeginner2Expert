#include "position.h" 
#include <iostream>  // IOstream stands for Input Output stream
using namespace std; 

Position::Position(int x, int y)
{
    this->x=x;
    this->y=y;   //this means: this instance e.g. var.x= x
}

Position::~Position()
{

}

void Position::getPosition() const // const is added so this method can be used for const instances
{
    cout<< "The x : " << x << endl;
    cout<< "The y : " << y << endl;
}

void Position::setPosition(int x, int y) // this method on the other had can't be used for const instances
{
    this->x=x;
    this->y=y;   
}