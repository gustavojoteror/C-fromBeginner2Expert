#include <iostream>  // IOstream stands for Input Output stream
//#include <> // to include a library!!!!

using namespace std;   // giving a meaning to certain strings like cout, cin. 


// pointer array

int main()   // function(parameters)
{

    int a[3];  // in memory   |a[1] |a[1] |a[1] |a[1] |a[2] |a[2] |a[2] |a[2]| // for bytes per int and next to each other
    int * const p = &a[0];    
    short int zm;
    
    cout<< a <<endl;	    // works as a pointer!
    cout<< p <<endl;
    cout<< &a[0]<<endl;
    cout<< &a[1]<<endl;	    // moves by 4 bytes
    cout<< &a[2]<<endl;
    
    cout<<endl;

    cout<< a <<endl;   // same as &a[0]
    cout<< a+1 <<endl; // same as &a[1]
    cout<< a+2 <<endl; // same as &a[2]
    cout<< a+3 <<endl;
    // we can move the pointer with a plus one size of the pointing type variable (by 4 for int)
    
    a[0] = 20; a[1]= 98; a[2]=74;

    cout<< *a <<endl;	    // same as a[0]
    cout<< *(a+1)<<endl;    // same as a[1]
    cout<< *(a+2)<<endl;    // same as a[2]

    cout<<endl;
    // cout << a++ << endl; // compiling error because a++ a=a+1
    int * p2 = &a[0];
    cout<< *p2 <<endl;	    // value of 20
    cout<< ++*p2 <<endl;    // incremeting the value under that address: 21
    cout<< *++p2 <<endl;    // moving by 4 bytes the pointer and show me a[1]: 98
    cout<< *p2++ <<endl;    // value from the current pointed address but after that increse the value: 98 (but after it will increase in 4 bytes)
    cout<<*p2 <<endl;	    // now that it was increment the pointer address: 74 
    // lets point outside the array (this is very dangerous!!!! it could go to another program)
    cout<< *++p2<<endl;
    cout<< *++p2<<endl;
    cout<< *++p2<<endl;
    cout<< *++p2<<endl;

    return 0 ;


}

