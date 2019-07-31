#include <iostream>  // IOstream stands for Input Output stream
//#include <> // to include a library!!!!
#define PI 3.1416
using namespace std;   // giving a meaning to certain strings like cout, cin. 


/*validating data
    buffer - temporary data
*/

void initMenu();
void menuDecision(int);
double areaCircle(double);
//const double PI=3.1416; //or also like this
double areaSquare(double);
double areaRectangle(double,double);
double areaTriangle(double,double);
bool isValid(string);
bool isValid(); // overloading without error message
int main()   // function(parameters)
{
    int choice;
    char cont;

    do
    {
	initMenu();
	
	while(!(cin>>choice))
	{
	    //cout<<"state before: " << cin.rdstate()<<endl;
	    cin.clear(); // you need to clear because it is a int and when given a character it goes crazy
	    //cout<<"state after: " << cin.rdstate()<<endl;
	    cin.ignore(1024, '\n');//cin>>choice; // problem if given a character
	    initMenu();
	    cout<<" You have type the wrong data to the input. " <<endl;
	}

	menuDecision(choice);
	do
	{
	    cout<< " Do you want to continue the program? (Y/N)" <<endl;
	    cin>> cont; // problem if you give to many characters
	    // char is just one character but if we give more then it goes into the buffer
	    cin.ignore(1024,'\n'); // ignore 1024 characters
	    //cin.ignore(numeric_limits<streamsize>::max(), '\n');

	}while (cont!='y' && cont!= 'Y' && cont!='n' && cont!='N');
    }while (cont== 'y' || cont== 'Y');

    return 0 ;


}


void initMenu()
{
    cout<< "Enter option: " <<endl;
    cout<< "1. Circle" <<endl;
    cout<< "2. Square" <<endl;
    cout<< "3. Rectangle" <<endl;
    cout<< "4. Triangle" <<endl;

}
void menuDecision(int choice)
{
    double r, a, b, h;
    switch(choice)
    {
	case 1:
	    cout<< "Enter the radius: "<<endl;
	    do { cin>> r; } while(!isValid("the radius is wrong please type it again "));
	    areaCircle(r);
	    break;
	case 2:
	    cout<< "Enter the side: "<<endl;
	    do { cin>>a; } while(!isValid("the side is wrong please type it again "));
	    areaSquare(a);
	    break;
	case 3:
	    cout<<"Enter one side: "<<endl;
	    do { cin>>a; } while(!isValid("the side is wrong please type it again "));
	    cout<<"Enter the other side: "<<endl;
	    do { cin>>b; } while(!isValid("the side is wrong please type it again "));
	    areaRectangle(a,b);
	    break;
	case 4:
	    cout<<"Enter the base: "<<endl;
	    do { cin>>b; } while(!isValid("the base is wrong please type it again "));
	    cout<<"Enter the height: " <<endl;
	    do { cin>>h; } while(!isValid("the height is wrong please type it again "));
	    areaTriangle(b,h);
	    break;
	default:
	    cout<< "You didn't choose any of the option from above" <<endl;




    }

}
double areaCircle(double r)
{
    double result = PI * r * r;
    cout<<"area of the circle with a radius: "<< r<<" is: : "<< result<<endl; 
    return result;
}
double areaSquare(double a)
{
    double result = a * a;
    cout<<"area of the square with side: "<<a << " is: " << result<<endl;
    return result;
}
double areaRectangle(double a, double b)
{
    double result= a * b;
    cout<<"area of the rectangle with sides: " <<a<< " and " <<b <<" is: "<< result<<endl;
    return result;
}
double areaTriangle(double b, double h)
{
    double result= b * h * 0.5;
    cout<<"area of the triangle with base: "<< b<< " and height: "<< h<< " is : " <<result<<endl;
    return result;

}
bool isValid(string error_msg)
{
    if (cin.rdstate()) // state is wrong when it is not equal to 0
    {
	cin.clear();
	cin.ignore(1024,'\n');
	//initMenu;i

	cout<< error_msg<<endl;
	return false;
    }
    else
	return true;
}
bool isValid() //string error_msg)
{
    if (cin.rdstate()) // state is wrong when it is not equal to 0
    {
	cin.clear();
	cin.ignore(1024,'\n'); 
	//cout<< error_msg<<endl;
	return false;
    }
    else
	return true;
}
