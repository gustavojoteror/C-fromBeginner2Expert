#include <iostream>  // IOstream stands for Input Output stream
//#include <> // to include a library!!!!

using namespace std;   // giving a meaning to certain strings like cout, cin. 

// Bitwise operator

main()   // function(parameters)
{
	/*
	    bit consits of 0, 1
	    01010101: base 2
	    
	    Normal for us is base 10
	    e.g: 1 2 6 = 1* 10^2 + 2* 10^1 + 6* 10^0;
	    
	    Bitwise:
	    1 0 1 0 = 1* 2^3 + 0* 2^2 + 1* 2^1 + 0* 2^0 = 8 + 0 + 2 + 0 = 10
	    1 0 1 1 0 0 = 0* 2^0 + 0* 2^1 + 1* 2^2 + 1* 2^3 + 0* 2^4 + 1* 2^5 = 4 + 8 + 32 = 44
	    
	    
	    Bitwise AND         - &        (for operating bits)
	    Bitwose OR          - |        (pipe)
	    Bitwise NOT         - ~        (tilde) 
	    Bitwose XOR         - ^        (pipe)  (eXclusive OR) (only can be one alternative correct at the same time)
	                                    0   0  = 0
	                                    0   1  = 1 
	                                    1   0  = 1
	                                    1   1  = 0
	    Bitwise left shift  - <<        (to move bits to the left) 
	    Bitwise right shift - >>        (to move bits to the right) 
	
	
	*/
	
	
	//AND
	cout << "AND bitwise operator "<<(10 & 2 ) << endl;
	
	/*
	    1 0 1 0     (10 in binary)
	    0 0 1 0     (2  in binary)
	    -------
	    0 0 1 0     the results is 2
	
	*/
	
	//OR
	cout << "OR bitwise operator "<<(10 | 2 ) << endl;
	
	/*
	    1 0 1 0     (10 in binary)
	    0 0 1 0     (2  in binary)
	    -------
	    1 0 1 0     the results is 10
	
	*/
	
	//XOR
	cout << "XOR bitwise operator "<<(10 ^ 2 ) << endl;
	
	/*
	    1 0 1 0     (10 in binary)
	    0 0 1 0     (2  in binary)
	    -------
	    1 0 0 0     the results is 8
	
	*/
	
	//NOT 
	cout << "NOT bitwise operator "<<(~10) << endl;
	
	/*
	    00000000000000000000000 1 0 1 0     (10 in binary)
	    -------
	    11111111111111111111111 0 1 0 1     the results is -11 
	    
	    gives negative because the first bit says the sign of the value
	
	*/
	
    //Shift to the left side 
	cout << "Shift to the left side bitwise operator "<<(10 << 3) << endl; // this means that we are multiplying 10 by 2 raised to the power of 3
	
	/*
	    0 0 0 1 0 1 0     (10 in binary)
	    -------------       (moving 3 spaces to the left)
	    1 0 1 0 0 0 0     (80 in binary)
	*/
	
	//Shift to the right side 
	cout << "Shift to the right side bitwise operator "<<(72 >> 3) << endl; // this means that we are dividing 80 by 2 raised to the power of 3
	
	/*
	    1 0 0 1 0 0 0     (72 in binary)        
	    -------------       (moving 3 spaces to the right)
	    0 0 0 1 0 0 1     (9 in binary)
	*/
	
	
	
	
	return 0;
}
