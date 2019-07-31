//class
#ifndef USER_H_INCLUDED  
#define USER_H_INCLUDED

class User
{
    //private: // by default is private
        int ID; // i want a different ID for each user: better static property
        static int counter;   // variable shared by all instances

    public:
        User();
        ~User();
        int getID() {return ID;}
        //int getCounter() {return counter;} // you can access the counter but only through an instance
        static int getCounter() {return counter;} // now you can access the counter without instance
};

// static properties and static methods for classes
//      a static property of a class means that all instance of that class will
//          have the same value
//      by adding static to a variable then the variable is shared by all instances
//      by addid static to a method then the method is accessible without instances

#endif // USER_H_INCLUDED
