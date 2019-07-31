#include <iostream>  // IOstream stands for Input Output stream
//#include <> // to include a library!!!!

using namespace std;   // giving a meaning to certain strings like cout, cin. 

// scope / range of variables

//globale variable outside the main function

int globalVariable;
int nr= 5;

main()   // function(parameters)
{
	// local variable
	int localVariable;


	cout<< " value of number "<< nr<<endl;
	cout<< " value of global variable " << globalVariable<<endl;
	cout<< " value of local variable " << localVariable<<endl;
	

	int a = 10;

	if (a==10)
	{
	    int result = a *10;
	
	}

	//cout<< result<<endl; // compiling error because result is a local variable of the if condition, unless you defined it outside


	int nr; 
	int results=0; // you need to assign a value (initialized)

	for (int i = 0; i<3; i++)
	{
	    cout<< "Enter " << (i+1) << " number " <<endl;
	    cin >> nr;
	    results += nr;
	}

	cout<< results<<endl; //cout<< i<<endl; //error because i is a local variable
	int i=0;
	for (;i<3; i++
	return 0;
}
