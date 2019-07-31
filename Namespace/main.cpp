#include <iostream>  // IOstream stands for Input Output stream
//#include "class.h"
//#include <> // to include a library!!!!

// namespaces
    // space where you can create names
    // classes, variable, function. You are giving them labels
    // you can create two variable with the same name in different namespaces
    // and can be used without a problem

int a = 20;  //global space

//creating a namespace
namespace A
{
    int a=10;

}
namespace B
{
    int a=80;

}
namespace C
{
    int var=900;

}
namespace D
{
    int var=-25;

}
namespace mySpace
{
    //using namespace std;  // if you don't want to have std::....
    class MyNewLine
    {
        private:
            std::string text;
        public:
            MyNewLine(std::string text="\n\n\n") {this->text=text;};   // \n it represents an enter
            std::string toString() {return text;};
    };

    std::ostream & operator<<(std::ostream & out, MyNewLine & obj) // overloading the output stream <<
    {
        return out << obj.toString();
    }
    MyNewLine endline;

}

using namespace C;
using namespace mySpace;
//using namespace std;   // giving a meaning to certain strings like cout, cin. 
int main()   // function(parameters)
{
    int a =100;   //local space
    
    std::cout<< a<<mySpace::endline.toString();  // a will come from the local space
    // we can access the global variable with ::a
    std::cout<< ::a<<std::endl;  // a will come from the global space
    std::cout<< A::a<<std::endl; // a will come from the namespace A
    std::cout<< B::a<<std::endl; // a will come from the namespace B
    std::cout<< var<<endline; // var will come from the defined namespace
    std::cout<< D::var<<mySpace::endline; // var will come from the defined namespace

    // I used my user defined endline function
    /*


    /*
    */
    return 0 ;
}

