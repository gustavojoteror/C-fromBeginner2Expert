//header file for the new class
#ifndef POSITION_H_INCLUDED  
#define POSITION_H_INCLUDED

class Position
{
    private:
        int x, y;
    public:      
       Position(int, int);    // constructor
       ~Position();           // destructor
    //methods
       void getPosition() const;
                    // const is added so this method can be used for const instances
       void setPosition(int, int);
                    // this method on the other had can't be used for const instances
};


#endif // POSITION_H_INCLUDED