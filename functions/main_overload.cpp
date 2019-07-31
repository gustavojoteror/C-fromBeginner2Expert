#include <iostream>  // IOstream stands for Input Output stream
//#include <> // to include a library!!!!

using namespace std;   // giving a meaning to certain strings like cout, cin. 


//overloading function

int power(int,int); //declaration of the function
double power(double, int); // overloading the function //declaring the same function but with different parameter and output type
int main()   // function(parameters)
{
    cout<< power(2,3) <<endl;  // using original definition of power
    
    cout<< power(2.5,3) <<endl; // will not work with the original function power(int, int), then it uses the other definition

    return 0 ;

}
/*

    2 ^ 3 =  base ^ exponent = 2 * 2 * 2 (base * base (the number of exponent))
*/

int power(int b, int e) // definition of the function
{
    int tmp = b;
    /*while(e > 1)
    {
	b = b * tmp;
	e--;
    }
    */
    // with less instruction
    while(e-- > 1)  // post decremetation
	b*=tmp;		
    
    return b;
}

double power(double b, int e) // other definition of the function
{

    double tmp=b ;
    while(e-- >1)
	b*=tmp;

    return b;
}

