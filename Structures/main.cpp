#include <iostream>  // IOstream stands for Input Output stream
// is as the whole file iostream would be here!
/*
    sdadsadasd
*/
//#include <> // to include a library!!!!
using namespace std;

/* DATA STRUCTURE */
struct personalData
{
    string name;
    string surname;
    string telephoneNumber;
    short age;
}a,b; // semi-colon

void test(personalData *);

int main()   // function(parameters)
{
    personalData person;  // the type of the variable person is personalData
    person.name = "Gustavo";
    person.surname = "Otero";
    person.telephoneNumber = "9223292";
    person.age = 22;

    cout<< person.name<<endl;
    cout<< person.surname<<endl;
    cout<< person.telephoneNumber<<endl;
    cout<< person.age<<endl;

    // Array of personData
    personalData persons[5];
    persons[0]=person;
    
    persons[1].name = "Daniela";
    persons[1].surname = "Hernandez";
    persons[1].telephoneNumber = "23123123";
    persons[1].age = 25;

    cout<< persons[1].name<<endl;
    cout<< persons[1].surname<<endl;
    cout<< persons[1].telephoneNumber<<endl;
    cout<< persons[1].age<<endl;


    // Pointer of personData
    cout<<(*persons).name<<endl;       // remember persons is a pointer to the first ellement of the array
    cout<<(*&persons[0]).name<<endl;  //
    cout<<persons->name<<endl;        // getting the surname of the pointed variable

    cout<<(*(persons+1)).surname<<endl;       // remember persons is a pointer to the first ellement of the array
    cout<<(*&persons[0+1]).surname<<endl;  //
    cout<<(persons+1)->surname<<endl;        // getting the surname of the pointed variable


    personalData *p = &persons[0];
    cout<< p->telephoneNumber<<endl;
    personalData *p1 = persons;
    cout<< p1->name<<endl;


    // Defining the variable in the structure directly
    a.age= 50;
    cout<<a.age<<endl; 

    // using functions
    test(p1); // test(persons)
    cout<< p1->name<<endl;

    /*


    /*
    */
    return 0 ;
}

void test(personalData *person) // you only send the address of the structure no of all the variables
{
    person->name = "Rodolfo";

}