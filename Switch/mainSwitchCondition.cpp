#include <iostream>  // IOstream stands for Input Output stream
//#include <> // to include a library!!!!

using namespace std;   // giving a meaning to certain strings like cout, cin. 

// Switch

main()   // function(parameters)
{
	int x=0;
	char x1=100;
	
	// it can only use integers or characters types!!
	// for example: double has the problem of precision!!
	
	// char is defined by numbers, ASCII https://es.wikipedia.org/wiki/ASCII
	switch (x)    // switch executes everything after the correct case: until the curly brackets or until it find a break
	{
	    case 0:
	        cout<< " This is for 0 case" << endl;
	    case 20:
	        cout<< " This is for 20 case" << endl;
	    case 50:        
	        cout<< " This is for 50 case" << endl;
	        break;
	    case 100:
	        cout<< " This is for 100 case" << endl;
	    default:
	        cout<< " This is for any other case " << endl;
	
	
	}
	
	int a=100; 
	int b =20;
	
	//CONDITION ? so instruction that will be executed if condition is true  : if condition is NOT true
	string message = (a > b) ? "a > b" : "a <= b ";
	//             condition if "a > b" else "a <= b "
	
	cout<< message <<endl;
	cout<< ((7 > 4 ? 7 : 4)+10) <<endl;
	cout<< ((a > b ? a : b)+10) <<endl;
	



	return 0;
}
