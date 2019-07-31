//header file for the new class
#ifndef TEST_H_INCLUDED  
#define TEST_H_INCLUDED
class B; //we need to tell the compiler that there is a class B definition somewhere
         //which can be used in class A (written before class B)


class A
{
    private:
        int secondtmp;  // still, class B cannot get access to this because class A doesn't consider class B a friend
    public:   
        void setSecretValue(B &, int);  
       
};

class B
{
    private:
        friend class A; // this lets the class A to access the private stuff from class B
        int secretValue;
    public: 
        //B();
        //~B();
        int getSecretValue() {return secretValue;}    
       
};
#endif // TEST_H_INCLUDED