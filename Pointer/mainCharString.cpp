#include <iostream>  // IOstream stands for Input Output stream
//#include <> // to include a library!!!!

using namespace std;   // giving a meaning to certain strings like cout, cin. 


//string and characters with arrays/pointers

int main()   // function(parameters)
{
    string text = "trala";      // t r a l a \0   (there array has an extra \0)
                                // because we have characters until \0
                                // then the array of characters finishes...
/*
    //how to get the characters from text

    for(int i=0; i< text.length(); i++)  //text.length()
    {
        cout<< text[i] <<endl;    // so a string is an array of characters!
    }
*/
    char ch = text[0];

    cout<< ch<<endl;
    
    // but also we can have an array of characters
    char characters[5] = "1234" ;  // the fifth element is \0

    cout << characters <<endl;

    // characters = "dfasfdasdasda" // compiling error because the array characters include
                                 // is only of lenght 5

    // but with string we don't have this problem
    string charter = "dfasfdasdasda";

    cout<< charter<<endl;
    // this is not a problem for c++ because we have string but if we have
    // libraries from c then this problem happens....

    // however another way:
    char characterss[] = "dfasfdasdasda" ; // no compiling error, compiler is smart
    cout<< characterss<<endl;
    
    // but we know already that an array is in reality a pointer to the first
    // element of the array
    cout<< characters[0]<<endl;
    cout<< *(characters)<<endl;     // *p: value of what we are poiting

    cout<< characters[1]<<endl;
    cout<< *(characters+1)<<endl;     // *p: value of what we are poiting
    
    // now let's try with a pointer
    char *p = characters;

    cout<< p[0]<<endl;
    cout<< *(p)<<endl;     // *p: value of what we are poiting

    cout<< p[1]<<endl;
    cout<< *(p+1)<<endl;     // *p: value of what we are poiting
  
    //========
    // now let's try to convert a string into characters
    
    //char text2[]= text;   // compiling error: invalid initializer
    //char *text2= text;    // we are tryng to convert string into char
    //char * text2= text.c_str();  // method to change strings into characters
                                    //error: invalid conversion from ‘const char*’ to ‘char*’
    const char * text2= text.c_str(); // this works but the characters are constant!
    cout<< "This is a test"<<endl;
    cout << text2<< endl;

    //========
    // now let's try to convert char into string
    char array[]= "here is a text";     // this works fine
    string teste = array;
    cout << teste<< endl;    

    //========
    // changing values of a character? 
    char * a = "test is 12212"; // this is created as a static string
                                // we cannot change a value
                                // this is gives a warning it should be const
    cout<<a <<endl;

    char b[] = "gustavo is good"; // like this we can change, not constant
    b[0] = 'J';                   // with '' instead of ""
    cout<< b<<endl;

    //========
    // with dynamic allocation
/*
    
    char * dynArry = new char[60];
    dynArry = "lalala";             // this now becomes a static array!!! 
                                    // can;t change the value anymore
                                    //
    cout<<"Dynamic array "<<endl;
    cout<< dynArry<<endl;         
    // all this is wroong  
    
    delete [] dynArry;  // we can't delete it now because it is static
*/
    // better
    char * dynArry = new char[60];
    dynArry[0]='k';
    dynArry[1]='a';   
    dynArry[2]='g'; 
    dynArry[3]='a';     

    cout<<"Dynamic array "<<endl;
    cout<< dynArry<<endl;         
    delete [] dynArry; 
    

    //========
    //array of strings
    string arr_of_string[6] = "this is a text that will be in all of the elements of stringes";
    cout<<arr_of_string[0]<<endl;
    cout<<arr_of_string[1]<<endl;
    cout<<arr_of_string[2]<<endl;
    cout<<arr_of_string[3]<<endl;

    arr_of_string[4] ="I dont want to be like that others";
    cout<<arr_of_string[4]<<endl;
    arr_of_string[5] ="Me neither";
    cout<<arr_of_string[5]<<endl;

/*
    cout<< &characters[0]<<endl;  // &value: address of value
    cout<< characters<<endl;     



/*
*/
    
    return 0 ;

}

