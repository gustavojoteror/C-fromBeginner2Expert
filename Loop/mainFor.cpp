#include <iostream>  // IOstream stands for Input Output stream
//#include <> // to include a library!!!!

using namespace std;   // giving a meaning to certain strings like cout, cin. 

// Arrays

main()   // function(parameters)
{
	
	// Exercise to count the number of digits
	int nr= 1234;  //4 digit integer
	int nrOfDigits = 1; //
	
	cout << 1234 / 10 << endl;
	cout << 123 / 10 << endl;
	cout << 12 / 10 << endl;
	cout << 1 / 10 << endl;
	
	int tmp = nr;
	while (tmp /= 10) // this loop stops when tmp=0, so there are no more digits. We are dividing a integer so it needs to give also a integer.
	    nrOfDigits++;
	    
	cout << "the number " << nr << " has " << nrOfDigits << " digits " <<endl;
	
	/* 
	    Multiplication table
	 of 1:   1 2 3 4  5  6  7  8  9  10
	 of 2:   2 4 6 8  10 12 14 16 18 20
	 of 3:   3 6 9 12 15 18 21 24 27 30
	 of 4:   4 8 ..
	 of 5:
	 of 6:
	
	*/
	for (int j=1; j<=10; j++) // amount of rows, lenght of column
    {
    
        if(j==5) continue; // everything after continue WONT be executed BUT LOOP WONT END BECAUSE OF IT
        
        
        
	    for (int i=1; i<=10; i++) // amount of columns, lenght of row
	    {
	        if(i==7) break; // everything after continue WONT be executed AND WE ARE LEAVING the ACTUAL LOOP
	        cout.width(4);
	        cout<< j * i << " ";
	    }
	    cout<< endl;        
	}
	
	// let do the same in one loop
	for (int i=1, j=1; i<=10 ; i++)
	{
	    cout.width(4);
	    cout<< i*j;
	    
	    if( i==10 )
	    {
	        j++;
	        i=0;
	        cout<< endl; 
	    }
	    if( j==11)
	        break;
	
	}
	
	return 0;
}
