//header file for the new class
#ifndef INTEGER_H_INCLUDED  
#define INTEGER_H_INCLUDED

class Integer
{
    private:
        int nr;
    public:    
        Integer() { };
        Integer(int);    // this a compare constructor!!
        operator int();
        Integer operator+=(Integer);   // output operator+=(object we are making)
        ~Integer();  

        int getNr() {return nr;};
       
};


#endif // INTEGER_H_INCLUDED