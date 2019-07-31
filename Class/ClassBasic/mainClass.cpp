#include <iostream>  // IOstream stands for Input Output stream
#include "class.h"
//#include <> // to include a library!!!!

using namespace std;   // giving a meaning to certain strings like cout, cin. 

// classes!!!


// structure we can define something with many attributes but we can't modified or 
// do something else with them. With classes you can. In classes you have
// functionality. Structures are special clases

struct PersonalDataStruct
{
    short age;  // only one attribute

};

/* now it is in another file: class.h
class PersonalData
{
    private:
        string name;  //private variable can only be used inside/within the class! not outside
        short age2;  
        
    public:      // by default everything is private unless stated otherwise
        short age;  // everything after public is public
                    
    // is common to have all attributes of the class as private because we don't
    // want the outside world to change it. We can use function for the outside world 
    // to change this attributes
    void setAge(int value)
    {
        if (value<0)
            age2=0;        
        else
            age2 = value;
    }  //inline function
    short getAge(){return age2;}

};
*/

void test()
{
    PersonalData person[5]; // invoking the constructor 5 times
    cout<<"Inside test function"<<endl;
    cout<<endl;
    // when the funciton is finished then the destructor is caled
}
void testpointer()
{
    PersonalData *pointer= new PersonalData[3]; // invoking the constructor 5 times
    cout<<"Inside testpointer function"<<endl;
    cout<<endl;
    // when the funciton is the memory is not being freed!!!!!

    // We need to free the memory ourself
    delete [] pointer;  // the destructor is now called!!!!
}

int main()   // function(parameters)
{
    // Using structure
    PersonalDataStruct person;
    person.age=10;
    cout<<   person.age <<endl;

    // Using structure
    PersonalData person1;   // we created an instance  of the class PersonalData
                            // instance: is a single copy of a class, a copy of an object
                            // classes are used to describe objects!
    
    PersonalData person2;   // another instance of personal data that know nothing about the
                            // the other instance person1
    
    PersonalData person3;
    PersonalData person4;
 

    person1.age=50; person2.age=20; person3.age=-5;
    person1.setAge(50); person2.setAge(20); person3.setAge(-5);

    cout<<   "Public variables" <<endl;    
    cout<<   person1.age <<endl;
    cout<<   person2.age <<endl;
    cout<<   person3.age <<endl; 

    cout<<   "Private variables" <<endl;   
    cout<<   person1.getAge() <<endl;
    cout<<   person2.getAge() <<endl;
    cout<<   person3.getAge() <<endl;  // setAge() has more functionaly, e.g. it check if the value give is correct
    cout<<   person4.getAge() <<endl;  // Using the default value of age by the constructor


    // Checking when is the constructor and destructor of the class invoked
    test();

    // Checking with pointers
    testpointer();

    // overloading the constructor
    PersonalData person5(66);
     cout<<   person5.getAge() <<endl;  // Using the default value of age by the constructor


    cout<< "Hello world!"<<endl; 

    

    /*


    /*
    */
    return 0 ;   // here is where the destructor is called
}

