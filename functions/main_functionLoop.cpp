#include <iostream>  // IOstream stands for Input Output stream
//#include <> // to include a library!!!!
#define PI 3.1416
using namespace std;   // giving a meaning to certain strings like cout, cin. 


//loop with function


void initMenu();
void menuDecision(int);
double areaCircle(double);
//const double PI=3.1416; //or also like this
double areaSquare(double);
double areaRectangle(double,double);
double areaTriangle(double,double);
int main()   // function(parameters)
{
    int choice;
    char cont;

    do
    {
	initMenu();
	cin>>choice;
	menuDecision(choice);
	do
	{
	    cout<< " Do you want to continue the program? (Y/N)" <<endl;
	    cin>> cont;
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
	    cin>> r;
	    areaCircle(r);
	    break;
	case 2:
	    cout<< "Enter the side: "<<endl;
	    cin>>a;
	    areaSquare(a);
	    break;
	case 3:
	    cout<<"Enter one side: "<<endl;
	    cin>>a;
	    cout<<"Enter the other side: "<<endl;
	    cin>>b;
	    areaRectangle(a,b);
	    break;
	case 4:
	    cout<<"Enter the base: "<<endl;
	    cin>>b;
	    cout<<"Enter the height: " <<endl;
	    cin>>h;
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
