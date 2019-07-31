//header file for the new class
#ifndef CLASS_H_INCLUDED  
#define CLASS_H_INCLUDED

class PersonalData
{
    private:
        //tring names;  //private variable can only be used inside/within the class! not outside
        short age2;  
        int *p;
    public:      // by default everything is private unless stated otherwise
        short age;  // everything after public is public
                  
    /*********Constructor: is a method
                            like a function but doesn't return anything 
                            has the same name as the class   */
    PersonalData();       // constructor
    PersonalData(short); // overloading constructor
    ~PersonalData();     // destructor: called in the return 0; in the main.cpp

    /*********Functions or method
    is common to have all attributes of the class as private because we don't
    want the outside world to change it. We can use function for the outside world 
    to change this attributes */
    void setAge(int);         // defined in class.cpp
    short getAge(){return age2;}    // inline function, can be leave it here because is short

};


#endif // CLASS_H_INCLUDED