#include "test.h" 
#include <iostream>  // IOstream stands for Input Output stream
using namespace std; 


Test::Test(int x , int y, int value)
{
    this->x = x;
    this->y = y;
    this->p = new int(value);  // allocating once 4 bytes (1 int) with the value that points p is value
            //new int[50];  // we are allocating 50 memory location for p
}
Test::Test(const Test & obj)// copy constructor
{
    this->x = obj.x;
    this->y = obj.y;
    this->p = new int(*(obj.p));  // we are allocating a new address with the value that obj.p points to
    
}
Test::~Test()
{
    delete p;
}