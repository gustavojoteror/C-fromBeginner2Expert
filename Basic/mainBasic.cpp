#include <iostream>  // IOstream stands for Input Output stream
//#include <> // to include a library!!!!

using namespace std;   // giving a meaning to certain strings like cout, cin. 

// Variables
// INITIALIZATION
// addres
// allocate

main()   // function(parameters)
{
//      First and second lecture 
	cout<< "Hello world!! I rock!! :)"<<endl;  // cout: console output
	std::cout<<"testing"<<std::endl; // << send what ever comes later to the previous instruction
	// cout is include in the "std" namespace!!
	// semi-colon at the end ; is to tell the compiler that instruction is finished in this line


//	Third Lecture: VARIABLES 
	int A, B=5; 
        A=4;  // defining a variable: first the type (int) then the name (A)
	// & (ampersand)
	// &name_of_variable;
        cout<<"The value of A+B: "<<A+B<<" the adrress of A is " << &A<<endl;
/*
	1. Variables can't have the same name
	2. Variables can't start from the number
	3. We can't used spaces, instead use underscore "_"
	4. Selfdescriptive name of the variables (recommendation)
	5. Variables can't be constructed of special characters, keywords
	6. Variables should be nouns (recommendation)
*/
	int prime_number;
	int primeNr;
	int iPrimeNr;		// Hungarian notation: i stands for int
	
//	Fourth lecture: variable types

//	INTEGERS, natural numbers
	//int -2billion to 2 billion, 4 bytes
	//short -32748 to 32767, 2 bytes

//	REAL numbers
	float  t1=5.5;	 //38  zeros	  4 bytes
	double t2=5.333; //308 zeros        8 bytes, larger precision

//	Characters
	char t3='s';
	string t4="Hello World";
	string t5="=D AGAINNNN";
	string combine= t4+" "+t5;
	cout<< combine<<endl; 

//  	Boolean
	bool t6 = true;  // true or false; SO FALSE is Always 0, every other number is TRUE
	bool t7 = 0;	
	bool t8 = 78990;
        cout<< t8<<endl;


	bool t10 ? 0;
	cout<<"Boolean with ! is: "<< t10;
//	UNSIGED type, only positive numbers: 0 to ....
	//unsigned short 
	//unsigend int
	//unsigned double

//	Constant type
	const string NAMEOFGAME = "Conqueror of c++";

	cout<< NAMEOFGAME <<endl;
	//NAMEOFGAME = "Something"; // this lines gives an error because you are trying to change a constant variables
	//cout<< NAMEOFGAME <<endl;
	int i =15;
	cout<<i++<<endl;
	cout<<i<<endl;


	return 0;
}
