#include <iostream>  // IOstream stands for Input Output stream
//#include <> // to include a library!!!!

using namespace std;   // giving a meaning to certain strings like cout, cin. 


//function
//return nameFunction(parameters of the function)
void welcome(); // declaration of function. This is telling the compiler  that there is a function with this name and that somewhere in the body will have the definition of the function

bool isNumber(string); // you do not need to define the name of the parameter in the declaration;
void enterName();
double add(double a, double b) {return a + b;} //inline function, only for small function
void changeValueTo10(int x) 
{
    x=  10; // this doesn't change the value because x is local variable
}
// functions / methods

int main()   // function(parameters)
{
	welcome();
/*
	string tmp; // string are character and we can check if it is a number

	cout<<"enter the number: "<<endl;
	cin>>tmp;

	bool isNumber=true;

	// tmp.function(); //writen by someone else
	// for(initialized; condition; increment)
	if(tmp[0] == '0')
	    isNumber = false;
	for(int i = 0 ;(i<tmp.length() && isNumber);i++)
	{
	    //if(tmp[i] >= 48 && tmp[i] <= 57) //www.ASCIItable.com 
		//isNumber=true;

	    if(!(tmp[i] >= 48 && tmp[i] <= 57)) // negation
	    {
		isNumber=false;
		break;
	    }
	}

	if (isNumber)
		cout<<"Number entered properly" <<endl;
	else
		cout<<"Number wasn't entered properly " <<endl;
	
	/*	
	

	string number; // 
	cout<<"enter a number: "<<endl;
	cin>> number ;
	bool result=isNumber(number);


	if(isNumber(number))
	    cout<<"Number entered properly " <<endl;
	else
	    cout<<"Number wasn't entered properly " <<endl;

        */

	enterName();
	enterName();
	enterName();

	double a = add(10,2);
	cout<<"the added number "<< a <<endl;
	
	
	
	char ch;
	cout<< "Do you want to ened the program? (Y/N)"<<endl;
	cin >> ch;
	if (ch == 'Y' || ch =='y')
	       return 1;	
	else
		cout<< "Program not finished yet "<<endl;

	return 0 ;




}


void welcome() //body of the function
{
    cout<<"Welcome to our program"<<endl;


}

bool isNumber(string tmp) //local variable
{
    if (tmp[0] == '0')
	    return false; // if the condition is done then the execution of the function is one because it will return a false...

    for (int i = 0; i<tmp.length(); i++)
	if(!(tmp[1] >= 48 && tmp[i] <=57))
	    return false;

    return true;


}

void enterName()
{
    string number;
    cout<<"enter a number: " <<endl;
    cin>> number;

    if(isNumber(number))
	    cout<<"number entered properly " <<endl;
    else
	    cout<<"number wasn't entered properly " <<endl;


}
