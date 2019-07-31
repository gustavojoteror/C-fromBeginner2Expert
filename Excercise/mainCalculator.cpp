#include <iostream>  // IOstream stands for Input Output stream
//#include <> // to include a library!!!!

using namespace std;   // giving a meaning to certain strings like cout, cin. 

// Calculator

main()   // function(parameters)
{
	double var1, var2;
	
	
	beginning:      // goto
	
	
	cout<< "Enter the first number: "<<endl;  cin >> var1;
    cout<< "Enter the second number: "<<endl; cin >> var2;
    cout<< "What do you want to do with the numbers?"<<endl;
    cout<< "+ - add"<<endl;
    cout<< "- - substract"<<endl;
    cout<< "* - multiply"<<endl;
    cout<< "/ - divide"<<endl;
    
    char decision;
    cin>> decision;
    //system("cls");      // to clear the terminal screen!
    switch(decision)
    {
        case '+':
            cout << var1 << " + " << var2 << " = " << var1+var2 <<endl;
            break;
        case '-':
            cout << var1 << " - " << var2 << " = " << var1-var2 <<endl;
            break;
        case '*':
            cout << var1 << " * " << var2 << " = " << var1*var2 <<endl;
            break;
        case '/':
            if (var2 !=0 ) // (var2) same notation, because the condition is always true except if var2 =0
                cout << var1 << " / " << var2 << " = " << var1/var2 <<endl;
            else
                cout << "You can't divide by zero, 0"<<endl;
            break;
        default:
            cout << "You typed a wrong character"<<endl;
    
    }
    cout<< "Do you want to continue that program? (Y/N)";
    char decision2;
    cin >> decision2;
    
    if (decision2 == 'y' || decision2 == 'Y')
        goto beginning;
        
	return 0;
}
