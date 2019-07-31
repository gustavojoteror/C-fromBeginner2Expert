#include <iostream>  // IOstream stands for Input Output stream
//#include <> // to include a library!!!!
#include <cstdlib>      //rand is defined in cstdlib (there is no standard c++ random function yet).

using namespace std;   // giving a meaning to certain strings like cout, cin. 


// Type - casting
int main()   // function(parameters)
{
    double var =5.5;
    
    cout<< var<<endl;
    cout<< (int)var<<endl; // type casting
                           // explicit way


    int a=5;
    int b= 7;

    cout<< a/b<<endl;  // give zero

    cout<< (double)a/b<<endl;           // only one needs to be double to make the division
    cout<< a/(double)b<<endl;
    cout<< (double)a/(double)b<<endl;


    int x =105325125;
    short y=x;          //implicity way of casting
    cout<< y<< endl;    // losing precision

    // Explicit way:
    cout<< int(var)<<endl;              //explicit way C
    cout<< static_cast<int>(var)<<endl; //explicit way C++


    char ch ='k';
    cout<< ch<<endl;
    cout<< (int)ch<<endl;  // check the true value of characters https://es.wikipedia.org/wiki/ASCII

    char asciiNotKnown;
    cin>>asciiNotKnown;
    cout<< (int)asciiNotKnown<<endl;  // check the true value of characters https://es.wikipedia.org/wiki/ASCII


    /*
    */
    return 0 ;
}
