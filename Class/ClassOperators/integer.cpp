#include "integer.h" 
#include <iostream>  // IOstream stands for Input Output stream
using namespace std; 

Integer::Integer(int nr)
{
    this->nr=nr;    // this a compare constructor!!

}
Integer::operator int()
{
    return this->nr;   
}

Integer Integer::operator+=(Integer c)
{
    this->nr = this->nr + c.getNr();
    return this->nr;
}

Integer::~Integer()
{


}