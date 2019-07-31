#include <iostream>  // IOstream stands for Input Output stream
//#include <> // to include a library!!!!

using namespace std;   // giving a meaning to certain strings like cout, cin. 

// Arrays

main()   // function(parameters)
{
	// variables
	int a; 
	
	// One dimensional array (like a vector)
	int array[3] ;  // TYPE NAME[ize_NR_OF_ELEMENTS];
	// we need to defined the size of the array before compilation because this is a static array
	
	array[0]=10;   // arrays in c++ starts from 0...
	array[1]=1111;
	array[2]=256;  // to size of array-1;
	array[3]=526;  // this is very very wrong, we are tryng to assing the value to something outside the memory of the array
	
	
	cout<< "array [0] = " << array[0] << ", address: " << &array[0] << endl;
	cout<< "array [1] = " << array[1] << ", address: " << &array[1] << endl;
	cout<< "array [2] = " << array[2] << ", address: " << &array[2] << endl;
	
	cout<< "array [0], address: " << &array[0] << ", address of array[0]: " << array << endl;
	
	
	// they will be moved 4 bytes from each other
	
	/*
	    the address is given in hexadecimal notation:
	    0   1   2   3   4   5   6   7   8   9   a   b   c   d   e   f
	    in our notation
	    0   1   2   3   4   5   6   7   8   9   10  11  12  13  14  15 
	    
	    
	    1 2 a = 1* 16^2 + 2* 16^1 +a* 10^0 = 256 + 32 + 10 = 298 
	    
	*/
	
	// 2-dimensional array (like a matrix)
	int biArray[3][4]= {0};   // we are allocating memory but random values are stored inside....
	
	for (int i=0; i<3; i++)
	    for (int j=0; j<4; j++)
	       biArray[i][j]= i + j; 
	
	
	cout<< "biArray [0][0] = " << biArray[0][0] << ", address: " << &biArray[0][0] << endl;
	cout<< "biArray [0][1] = " << biArray[0][1] << ", address: " << &biArray[0][1] << endl;
	cout<< "biArray [0][2] = " << biArray[0][2] << ", address: " << &biArray[0][2] << endl;
	cout<< "biArray [0][3] = " << biArray[0][3] << ", address: " << &biArray[0][3] << endl;
	cout<< "biArray [0][0], address: " << &biArray[0][0] << ", address of biArray[0]: " << &biArray[0] << endl;
	
	cout<< "biArray [1][0] = " << biArray[1][0] << ", address: " << &biArray[1][0] << endl;
	cout<< "biArray [1][1] = " << biArray[1][1] << ", address: " << &biArray[1][1] << endl;
	cout<< "biArray [1][2] = " << biArray[1][2] << ", address: " << &biArray[1][2] << endl;
	cout<< "biArray [1][3] = " << biArray[1][3] << ", address: " << &biArray[1][3] << endl;
	cout<< "biArray [1][0], address: " << &biArray[1][0] << ", address of biArray[1]: " << &biArray[1] << endl;
	
	cout<< "biArray [2][0] = " << biArray[2][0] << ", address: " << &biArray[2][0] << endl;
	cout<< "biArray [2][1] = " << biArray[2][1] << ", address: " << &biArray[2][1] << endl;
	cout<< "biArray [2][2] = " << biArray[2][2] << ", address: " << &biArray[2][2] << endl;
	cout<< "biArray [2][3] = " << biArray[2][3] << ", address: " << &biArray[2][3] << endl;
	cout<< "biArray [2][0], address: " << &biArray[2][0] << ", address of biArray[2]: " << &biArray[2] << endl;
	
	// multi-dimensional array 
	int multiArray[3][4][5]= {0};   // we are allocating memory but random values are stored inside....
	
	for (int i=0; i<3; i++)
	    for (int j=0; j<4; j++)
	        for (int k=0; k<5; k++)
	        {
	            multiArray[i][j][k]= i + j + k; 
	            cout<< "multiArray["<<i<<"]["<<j<<"]["<<k<<"] " << multiArray[i][j][k] << ", address: " << &multiArray[i][j][k] << endl;
	        }
	
	
	return 0;
}
