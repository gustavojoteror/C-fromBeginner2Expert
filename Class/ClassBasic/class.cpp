#include "class.h" 
#include <iostream>  // IOstream stands for Input Output stream
using namespace std; 

//.cpp file with the definition of the functions
// I had to compile as: g++ main.cpp class.cpp -o test

// Constructor
PersonalData::PersonalData()
{
    static int i = 0;   // static variables are defined only once!!
                        // it is shared by all the instances
    cout<< "This constructor has been just invoked for the "<< ++i<<"th time"<<endl;
    age2 = 1000; // value by default
    p= new int[5]; // allocating memory dynamically, we need to free the memory in the destructor!!!!
}
PersonalData::PersonalData(short age2) // overloading constructor
{
    static int k = 0;   // static variables are defined only once!!
                        // it is shared by all the instances
    cout<< "The overload constructor has been just invoked for the "<< ++k<<"th time"<<endl;
    this->age2 = age2; 
    
}
// Destructor
PersonalData::~PersonalData()
{
    static int j = 0;   // static variables are defined only once!!
                        // it is shared by all the instances
    cout<< "This destructor has been just invoked for the "<< ++j<<"th time"<<endl;

    delete [] p;     //free the memory, important
}

/*
void PersonalData::setAge(int value)
{
    if (value<0)
        age2=0;        
    else
        age2 = value;
}  
*/
void PersonalData::setAge(int age2)
{
    if (age2<0)
        this->age2=0;       // this: is the address of the instance of the class, from the main.cpp: person1.age2 = this->age2    
    else
        this->age2 = age2;
}  

// the symbol PersonalData:: is because it is being defined outside the class brackets!