#include "farm.h" 
#include <iostream>  // IOstream stands for Input Output stream
using namespace std; 

// Using abstract class
Animal::Animal()
{
    //voice = "default value";

}

Animal::~Animal()
{
    cout<<"I'm from the base class animal"<<endl;

}

Dog::Dog()
{
    sign = "D";    
    voice = "gua gua gua";

}
Dog::~Dog()
{
    cout<<"I'm from the sub class dog"<<endl;
}

Cat::Cat()
{
    sign = "C";    
    voice = "miauuu";

}
Cat::~Cat()
{
    cout<<"I'm from the sub class cat"<<endl;

}

Cow::Cow()
{
    sign = "Co";    
    voice = "muuu";

}
Cow::~Cow()
{
      cout<<"I'm from the sub class cow"<<endl;

}