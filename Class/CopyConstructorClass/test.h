//header file for the new class
#ifndef CLASS_H_INCLUDED  
#define CLASS_H_INCLUDED

class Test
{
    private:
        
    public:      
        int x;
        int y;  
        int *p;  // creating a pointer to see what happens with copy constructor
                 // remember p represents an address

        Test(int,int,int); // constructor
        Test(const Test &);// copy constructor
        ~Test();
};


#endif // CLASS_H_INCLUDED