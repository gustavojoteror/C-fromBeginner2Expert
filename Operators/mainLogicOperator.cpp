#include <iostream>  // IOstream stands for Input Output stream
//#include <> // to include a library!!!!

using namespace std;   // giving a meaning to certain strings like cout, cin. 

// Logical operators

main()   // function(parameters)
{
	/*
		AND conjuction &&
		7 > 5  && 5 != 10 // conjuction is true ONLY if both expressions are true

		expr1   expr2  results
		0	0	0
		0	1	0
		1	0	0	
		1	1	1
	*/

	cout<< ((7>5) && (5!=10)) << endl; 
	

        /*
                OR disjuction || (alternative
                7 > 5  !! 5 != 10 // disjuction is false ONLY if both expressions are false

                expr1   expr2  results
                0       0       0
                0       1       1
                1       0       1       
                1       1       1
        */

        cout<< ((3>5) || (10!=10)) << endl;


        /*
                NOT, logical negation! 
                7 > 5  ! 5 != 10 // disjuction is false ONLY if both expressions are false
		! (0) the results will be 1
		! (1) the results will be 0

                expr1   expr2  results
                0       0       0
                0       1       1
                1       0       1       
                1       1       1
        */

        cout<< !((3>5) && (10!= 10)) << endl;



	return 0;
}
