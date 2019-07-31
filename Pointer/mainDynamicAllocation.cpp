#include <iostream>  // IOstream stands for Input Output stream
//#include <> // to include a library!!!!

using namespace std;   // giving a meaning to certain strings like cout, cin. 


// dynamic allocation of memory 

int main()   // function(parameters)
{
    /*
    int array[100]; // static allocation of memory
		    // when you compile the computer is saving/reserving 100*4bytes(integer) of memory for array
		    // by static allocation, after compiling, we cannot allocate more memory
   
    // for example
    int amount;
    cout<<"How many number would you like to store in anarray?" <<endl;
    cin>> amount;
    

    //int array2[amount];  // this is very wrong because it can be that you do not have this amount of continuous memory or this memory is being used by another program that would crash
    
    //array2[0]; 300; // it is not sure that this memory is available!!! Because they must be in a row, next to each other: array2[0], array2[1], array2[2], ..., array2[amount]

    //cout<<array2[0] <<endl;

    */
    //======================================

    // we need special operator for that
    *(new int)=60;   // telling the pc that we need a free space of memory after compiling
	       // you need to tell also how many bytes: int=4bytes
    cout <<new int <<endl; // this should give an address
			  // each time you run the address is different
    cout << *(new int) <<endl; // it is a random value in memory, maybe it was used in another program before

    // Now we need an idenfier
    // *(new int) is an address you already know how to store address: with a pointer
   int *p = new int;    // now we are storing the address in a pointer for the free memory dynamically
    *p = 50;

    cout<< *p <<endl;

    int var = 4245;
    
    {// on local variables are destroyed after this brackets
      int *pp = new int;
      *pp = 555;

      cout<<*pp<<endl;

      delete pp; // delete the address that you want to release from memory
      pp = NULL; // giving an empty space in the memory


      pp=&var; // this is not dynamically allocating memory, we do not need to free this
      if (pp!=NULL) // more safe!!!
      {
        cout<<"after deleting the allocated memory"<<endl;
        cout<< pp <<endl; // pp is still pointing to the address, but the address doesn't belong to us anymore
        *pp = 56; // this again would be wrong because this memory could be now part of another program as you already release the memory
        cout<< *pp<<endl; // this could give a random value

      }




    }// after this the variable pp is destroyed, however the memory is still allocated. therefore we need to destroy the varaibled
    // cout<< *pp<<endl; // gives a compiling error
    
    cout<< "var  is " << var <<endl;
    delete p;

    //---------------------------

    int amount;
    cout<< "How many number would you like to store in an array? " <<endl;
    cin>>amount;
    

    //dynamic memory allocation for arrays with elements with type int (4 bytes) = 4bytes x amount
    int *ppp     = new int[amount];

    cout<< ppp << endl;		// as before ppp is a pointer 
    cout<< &ppp[0] <<endl;	// ppp[0] is a value, &ppp[0] is the address
    
    
    for (int i=0; i <amount; i++)
    {
      cout<< "Enter the " << (i+1) << " number: " <<endl;
      cin >>ppp[i];
    }
    
    for(int i=0; i<amount; i++)
	cout<<" p[" << i << "] has a value of: " << ppp[i]<<endl;

    delete []ppp; // releasing the memory allocated
    //-----------------------

    {
	cout<< "Checking if the allocated memory is the same before and after " <<endl;
	int *g = new int;
	cout<< g <<endl;

	delete g;

	g = new int; 
	cout << g <<endl;
	// it is only the same because we released the memory allocated before. But if we do not do that then another new memory allocation is done for our program. Because the memory is not released
	delete g; // REMEMBER THIS IS VERY IMPORTANT


    }
    return 0 ;




}

