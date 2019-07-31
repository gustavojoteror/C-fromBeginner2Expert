#include <iostream>  // IOstream stands for Input Output stream
//#include <> // to include a library!!!!

using namespace std;   // giving a meaning to certain strings like cout, cin. 

//while
main()   // function(parameters)
{
	//=======================================
	// WHILE
	int i=0;
	
	while(++i< 10) // it is sum before the condition is checked
	    cout<< i << endl;
	cout<< endl;
	
	i=0;
	
	while(i++< 10)
	    cout<< i << endl;
	cout<< endl;
	i=10;
	
	while(i--)
	    cout<< i << endl;
	cout<< endl;
	i=10;
	
	while(--i)
	    cout<< i << endl;
	
	i=0;
	const int SIZEOFARRAY = 10;
	int array[SIZEOFARRAY];
	
	while(i < SIZEOFARRAY)
	{
	    array[i] = 10*i;
	    cout<< array[i]<<endl;
	    i++;
	}
	
	//=======================================
	// DO WHILE
	
	i=0;
	do{
	cout<<"lalala"<<endl;

	} while(i); // checks the condition after
	
	while(i)
		cout<<"lalala"<<endl; // checks the condition before

	
	return 0;
}
