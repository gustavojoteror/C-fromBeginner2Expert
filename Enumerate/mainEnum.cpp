#include <iostream>  // IOstream stands for Input Output stream
//#include <> // to include a library!!!!

using namespace std;   // giving a meaning to certain strings like cout, cin. 


// enumeration type - enum - 0 1 2 3 4 ...

enum dayOfWeek {M=1, TU, W, TH, F, SA, SN}; // specifying 
	    // by default it start with 0 unless you set it like that

string getDay(dayOfWeek);
int main()   // function(parameters)
{
    dayOfWeek d = M;  // the type of d is dayOfWeek and only can be M, TU, W, TH, F, SA, SN 
    cout<< d<< endl;  // it is counting the position in the enumeration type dayOfWeek
    cout<< dayOfWeek(TU)<<endl;


    
    // How to use this thing
    cout<< getDay(M)<<endl;
    int i;    
    cout<<"Enter the day of a week " <<endl;
    cout<< "starting with monday as 1" <<endl;
    cin>>i;

    cout<< getDay(dayOfWeek(i))<<endl;

    return 0 ;




}
string getDay(dayOfWeek d)
{
    switch(d)
    {
	case M:
	    return "Monday";
	case TU:
	    return "Tuesday";
	case W:
	    return "Wednesday";
	case TH:
	    return "Thursday";
	case F:
	    return "Friday";
	case SA:
	    return "Saturday";
	case SN:
	    return "Sunday";
	default:
	    return "You type something wrong";

    }


}
