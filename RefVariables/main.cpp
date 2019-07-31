#include <iostream>  // IOstream stands for Input Output stream
//#include <> // to include a library!!!!

using namespace std;   // giving a meaning to certain strings like cout, cin. 
//

// reference variables
//	calling variable by their reference number 

void swap(int,int);
int swapRef(int &, int &);
int & swapRef2(int &, int &);
int main()   // function(parameters)
{
    string name = "Agnes";

    cout<<"Value of variable: " <<name << " with address "<< &name<<endl;

    string &nr_6 = name; // i have to assign another variable to this new variable, which is the reference of the old variable
			// is just another name

    cout<< "Value of the new variable " << nr_6 << " address of Variable is: " << &nr_6 <<endl;
    
    nr_6 = "Scott"; // we will change the value of both variables
 
    cout<<"Value of variable: " <<name << " with address "<< &name<<endl;
       
    //string &nr_6 = name; // i have to assign another variable to this new variable, which is the reference of the old variable
                  // is just another name
	         
    cout<< "Value of the new variable " << nr_6 << " address of Variable is: " << &nr_6 <<endl;
   
    
    /*
	Reference varible must be initialized when created
	There is a difference between & when defining and & using in an function
	    type &name ... // This is defining a reference variables
	    &name	   // this is the addrees of the variable
	Reference variable can;t change associations /connections
	Refence variable can be const and therefore cannot change their values unless the valua of the associated variable is changed
	    e.g. string name = "Agnes";   const &nr_6 = name;
	    nr_6 = "Scott"; // this is wrong will give you a compiling error
	    name = "Scott"; // this is fine!!
	Reference variable must be the same tpe as associated variable
    */

    // Reference variables in functions

    int a = 10, b=20;

    // I want to swap the values of the variables
    //int tmp = a; // t=10
    //a = b ;	 // a=20 
    //b = tmp;	 // b=t = 10;

    swap(a,b);	// they are not being swap!!! Because x and y are locale variables!!!

    cout<< "Value of a is  " << a <<" and b is " << b <<endl;
    

    // Using reference variables
    int c= swapRef(a,b);	// let's try with reference variables better!
    
    cout<< "Value of a is  " << a <<" and b is " << b <<endl;
    cout<<" Value of c " <<c <<endl;

    c=100;  // c was returned as a copy of the value of a

    cout<< "Value of a is  " << a <<" and b is " << b <<endl;
    cout<<" Value of c " <<c <<endl;
    
    // Using reference variables but return also as a reference variables
    int &d= swapRef2(a,b);        // let's try with reference variables better!
     
    cout<< "Value of a is  " << a <<" and b is " << b <<endl;
    cout<<" Value of d " <<d <<endl;
        
    d=100;	// by changing d we are also changing x
         
    cout<< "Value of a is  " << a <<" and b is " << b <<endl;
    cout<<" Value of d " <<d <<endl;
    
    return 0 ;




}
void swap(int x, int y)
{
    int t;
    t=x;
    x = y;
    y = t;
    //cout<< "Value of x is  " << x <<" and y is " << y <<endl;
}
int swapRef(int &x, int &y)
{
    int t;
    t=x;
    x=y;
    y=t;

    return x;

}
int & swapRef2(int &x, int &y)
{
    int t;
    t=x;
    x=y;
    y=t;

    return x;

}

