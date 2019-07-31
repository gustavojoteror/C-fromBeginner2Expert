#include "test.h" 
#include <iostream>  // IOstream stands for Input Output stream
using namespace std; 

void A::setSecretValue(B &objectB, int value)
{
    objectB.secretValue = value;

}
/*
B::B()
{
    secretValue =100;
}
B::~B()
{
}
*/