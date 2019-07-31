#include <iostream>  // IOstream stands for Input Output stream
//#include <> // to include a library!!!!

using namespace std;   // giving a meaning to certain strings like cout, cin. 


//pointers are ordinary variables than can store addresses of variables

// int &p=name; // reference variable
// int *p;      // pointer

int main()   // function(parameters)
{

    int var =5; // variables as a value and an address
    cout<< &var<<endl; // the address

    // Now we need variables to store address


    int *p; // definition of a pointer, It stores as a variable the address

    p = &var;

    cout<< p <<endl;

    // Now lets get the value just by having the address
    cout<< *&var<<endl;
    cout<< *p <<endl;

    // again like with the refernece variables 
    //int *p ; // the * here is to define a pointer! * informes that it is a pointer
    // *p    // this * here retrieves  (get) value from indictated (pointed) area in our memory 
    
    int *p1 = &var; // same as above but in one line


    // Changing the value with the pointer
    *p =  20;

    cout << var<<endl;
    cout << *p <<endl;

    // chaning the value with the variable
    var = 35;

    cout<< var<<endl;
    cout<<*p<<endl;

    int a=49;
    p = &a; // we are chaing what does p point to in the memory
    // if we would define int * const p = &var; this line would not compile


    cout<< " Values of var and a" <<endl;
    cout<< var<<endl;
    cout<< *p<<endl;
    cout<< a<<endl;


    cout<< " Address of var and a"<<endl;
    cout<< &var<<endl;
    cout<< p << endl;
    cout<< &a <<endl;


    // Not very used but interesting
    int * const p_const = &a ; // this is a pointer that has to be initialized when defined, because 
			      //	it cannot change after defining the thing that it is point to
    const int *p_2 = &a;    // this is a pointer that cannot change the value that is under address 
			    // that it is pointing to. But the address can change.

    const int * const p_const3 = &a;  // this is a pointer than cannot change both the value of what 
				      // is pointing and the address it is point to.

    // the pointer has also an address so you can have a pointer to the address of a pointer
    int ordinary_var = 10;

    int *ordinary_p = &ordinary_var;

    cout<<"ordinary_var: " << ordinary_var << endl; // integer value
    cout<<"&ordinary_var: " <<&ordinary_var <<endl;  // address integer value
    cout<<"ordinary_p: " << ordinary_p << endl;	    // address
    cout<<"*ordinary_p: " << *ordinary_p<<endl;	    // integer value from pointed place
    cout<<"&ordinary_p: " << &ordinary_p<<endl;	    // address of the pointer itself
    
    // generating a pointer that pointer at the address of another pointer
    int ** p_pointing_to_address_of_pointer = &ordinary_p;
    cout<< " p_pointing_to_address_of_pointer: " << p_pointing_to_address_of_pointer << endl;      // address of the pointer
    cout<< " *p_pointing_to_address_of_pointer: " << *p_pointing_to_address_of_pointer << endl;	   // value in pointer: addres of integer value
    cout<< " &p_pointing_to_address_of_pointer: " << &p_pointing_to_address_of_pointer << endl;	   // address of the pointer that points the pointer
    cout<< " **p_pointing_to_address_of_pointer: " << **p_pointing_to_address_of_pointer << endl;  // value of the integer that the pointer points the pointer
    return 0 ;


}

