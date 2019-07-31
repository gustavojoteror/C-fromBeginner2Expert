//class
#include "user.h" 
#include <iostream>  // IOstream stands for Input Output stream
using namespace std; 

int User::counter = 0; // initialization of our static variable
User::User()
{
    
    counter++;
    ID = counter;

}

User::~User()
{



}