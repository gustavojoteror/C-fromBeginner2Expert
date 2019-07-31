#include <iostream>  // IOstream stands for Input Output stream
#include <vector>
//#include <> // to include a library!!!!

using namespace std;   // giving a meaning to certain strings like cout, cin. 


// Exceptions, and handling exceptions
//  exception: are situation that can happen in our problem that will stop our program
//  - divide by zero:  5/0
//  - allocate memory (with new) and we don't have enough memory
//  - etc

class DivisionByZeroException
{
    // professional way to do this
    public:
        void GetErrorMessage(){cout<<"Error: Do not divide by zero"<<endl;};

};

double division(double a, double b) throw(DivisionByZeroException) // this is to let know future programmer of your code that there is a through inside of this function
{
    //DivisionByZeroException err = DivisionByZeroException;
    if(b==0)
        throw DivisionByZeroException();
    return a/b;
}

int main()   // function(parameters)
{
    double a =5;

    try
    {
        double results =division(a,0.0);
        a *= 10; // a= 50
        cout<<"The results is "<< results<<endl; 

        if(a==50)
            throw a;   //exception    throw -> catch   (depend on the type of variable throwed)

        // throw will go out of the try so every after are not invoke
        cout<<"Other instructions"<<endl; 

    }    
    catch(int e)   //we can only catch integer here: is a was a doulbe then an error would occur
    {
        cout<< "Integer: A cannot be equatl to " << e<< endl;    
    }
    catch(double d)   //we can only catch double here: is a was a doulbe then an error would occur
    {
        cout<< "Double: A cannot be equat  " << d<< endl;    //d is equal to the variable thrown
    }
    catch(DivisionByZeroException f)   //we can only catch double here: is a was a doulbe then an error would occur
    {
        f.GetErrorMessage();
    }
    catch(...)   //we can catch everything here
    {
        cout<< "Everything:A cannot be equatl to " << a<< endl;    
    }
    cout<<"Lalalala"<<endl;


    /*


    /*
    */
    return 0 ;
}

