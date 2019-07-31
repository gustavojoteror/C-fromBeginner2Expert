#include <iostream>  // IOstream stands for Input Output stream
//#include <> // to include a library!!!!

using namespace std;   // giving a meaning to certain strings like cout, cin. 


//trainign pointer and functions

// using reference variables
int *multiplyBy(int &, int); // declaration of function
// using pointers
int multiplyByP(int *, int); // sending a pointer
// using array
void multiplyByArray(int *, int, int); //also works with: void multiplyByArray(int [], int);

int main()   // function(parameters)
{
    //=============
    // function with ref.Variable or pointers
    int a = 10;
    int *d = multiplyBy(a, 5);
    cout<<a<<endl;
    cout<<*d<<endl;

    int b = 5;
    int c=multiplyByP(&b, 10); //sending the address of the variables because the function asks for a pointer
    cout<<b<<endl;
    cout<<c<<endl;
    // c and b are totally difference variables!
    c = 599;
    cout<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    // a and d are the same?
    *d = 599;
    cout<<endl;
    cout<<a<<endl;
    cout<<*d<<endl;     // yes!
 
    cout<<endl;cout<<endl;

    //=============
    // benefint of pointer + function: can use arrays!!
    int array[10];   
    cout<< sizeof(array)<<endl;     // gives the amount of bytes used for this array
    cout<< sizeof(int)<<endl;       // gives the amount of bytes of an integer
    cout<< sizeof(array[0])<<endl;  // gives the amount of bytes of the element of the array

    int n = sizeof(array)/sizeof(array[0]);
    cout<< n<<endl;  

    for(int i=0; i<n; i++)  // not hardcoded!!     //i<10; i++)     // hardcoded!!
    {
        array[i]=((i+1)*(i+1));
        cout<<"array ["<<i<<"] = "<<array[i]<<" "<<endl;
    }
    cout<<endl;cout<<endl;
    multiplyByArray(array, 5, n) ;      
    //multiplyByArray(&array, 5, n) ;   // NOOO!!! THis would be the address of a pointer
    //multiplyByArray(&array[0], 5, n) ;   // YES!!! Because &array[0]==array
    for(int i=0; i<n; i++)  // not hardcoded!!     //i<10; i++)    // hardcoded!!
        cout<<"array ["<<i<<"] = "<<array[i]<<" "<<endl;
    /*
    */
    return 0 ;

}


int *multiplyBy(int &var, int b)  // defintion/body of function
{   // by reference
    // var is the nickanem of a;
    var *= b;
    return &var;
}

int multiplyByP(int * var, int b)  // sending a pointer
{   // with pointer
    // 
    //*var *= b;
    *var = *var * b;        // *var is the value of the pointer

    return *var;
}

void multiplyByArray(int *array, int b, int n)  // sending a pointer
{   // with arrrays
    // 
    //*var *= b;
    //int n = sizeof(array)/sizeof(array[0]);     // this doesn't work because it is a point!!!!
    cout<<"Inside the function: "<<n<<endl; 

    for(int i=0; i<n; i++)  // not hardcoded!!   //i<10; i++)        // hardcoded!!
        multiplyByP(array+i,b);

/*   //other way to do it!!
    while(n--)
        array[n] *= b;
*/
    //return *var;
}
