//header file for the new class
#ifndef FARM_H_INCLUDED  
#define FARM_H_INCLUDED

#include <iostream>  // IOstream stands for Input Output stream
using namespace std; 

class Animal
{
    protected:
        string voice;

    public: 
        Animal();
        virtual ~Animal();   // need to be virtual to delete the memory of sub-class objects
        //virtual string getVoice() {return voice;};  
// what virtual does: tell the compiler to check in the sub-class if this method is re-defined   
       virtual string getVoice() =0;  //abstract class
                               //=0; is telling the compiler it is a abstract class

        // abstract class means it doesn't need to generate instance. It is there in order
        // for sub-class to inherit the same attributes or methods
};

class Dog : public Animal
{
    private:
        string sign;
    public: 
        Dog();
        ~Dog();  
        string getVoice() {return voice+" "+sign;};   
       
};

class Cat : public Animal
{
    private:
        string sign;
    public: 
        Cat();
        ~Cat();
        string getVoice() {return voice+" "+sign;};         
       
};

class Cow : public Animal
{
    private:
        string sign;
    public: 
        Cow();
        ~Cow();  
        string getVoice() {return voice+" "+sign;}; 
   
       
};

#endif // FARM_H_INCLUDED