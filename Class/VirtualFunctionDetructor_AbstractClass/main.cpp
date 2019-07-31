#include <iostream>  // IOstream stands for Input Output stream
#include "farm.h"
//#include <> // to include a library!!!!

using namespace std;   // giving a meaning to certain strings like cout, cin. 


// polymorphism, virtual functions, abstract class and virtual destructor


void voiceOfAnimal(Animal *);
void voiceOfAnimal(Animal &); //overloading
int main()   // function(parameters)
{
    // Animal animal; // now is an abstract class
    
    Dog dog; Cat cat; Cow cow;
    //cout<<animal.getVoice()<<endl; // now is an abstract class
    cout<<dog.getVoice()<<endl;
    cout<<cat.getVoice()<<endl;
    cout<<cow.getVoice()<<endl;
    

    //voiceOfAnimal(&animal); // now is an abstract class

/*
    double a = 50;
    int *p = &a ;
    this is an error! However with class and sub-classes it is poissible
                      But only when is the sub-class
*/

/*   now is an abstract class
    Animal *p = &dog;
    // Dog *p2 = &cat; //this is not possible, is an error
    cout<<p->getVoice() <<endl;  
                //takes the value of dog (voice) but the method from animal class
                // however if with use the world virtual before the method, the it will take from the sub class
                // what virtual does: tell the compiler to check in the sub-class if this method is re-defined
*/
    // Now with virtual we could:
    voiceOfAnimal(&dog);
    voiceOfAnimal(cat);
    voiceOfAnimal(&cow);
    // this mean tha we could use the same function for different sub-class of the base class
    // you need three things:
    // 1. Method in base class defined, with the word virtual in front
    // 2. Re-define the method in the sub class
    // 3. Use pointer or reference

// virtual destructor

    Dog *doggy = new Dog;

    Animal *doggy2 = new Dog;

    delete doggy;   // the destructor of both
    delete doggy2; // only the destructor of animal: so no all the memory is freed/
                  // you need to use a virtual destructor for the base class

    /*


    /*
    */
    

    return 0 ;
}

void voiceOfAnimal(Animal *p) // by pointer
{
    cout<<p->getVoice()<<endl;


}
void voiceOfAnimal(Animal &p) // by reference
{
    cout<<p.getVoice()<<endl;


}