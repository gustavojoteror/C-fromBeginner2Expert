//header file for the new class
#ifndef POINT_H_INCLUDED  
#define POINT_H_INCLUDED

class Point // base class or parent class or super class
{
    protected:  //private for the main but it can be inherited to the class Point2D
        int x;
    public:   
        Point(int =0);  // giving a defualt value for the integer in the constructor
        ~Point();
        int getX() {return x;};
        void setX(int);  
        //Point operator+(Point);
       
};

// let use inheretance so we do not need to repeat the same methods
class Point2D : public Point// derived class or child class or sub class
            //the parent class constructor is always called before
{           //when is public we take only the things in public without the constructor and destructor
    protected:
        int y;   // we inhereted x
    public:   
        Point2D(int =0, int =0);  // giving a defualt value for the integer in the constructor
        ~Point2D();
        int getY() {return y;};
        void setY(int); 
        void setX(int); // we can also re-define a method from an inhereted method
                        // we can still access the original method
        void setXY(int,int); 
        Point2D operator+(Point2D);

};

/*
class Point2D : public Point
                everything what is inside Point (excluiding the Constructor and Destructor)
                will be in Point2D
        private - CANNOT ACCESS
        protected - protected  (still)
        public - public (still)

class Point2D : protected Point
                everything what is inside Point (excluiding the Constructor and Destructor)
                will be in Point2D
        private - CANNOT ACCESS
        protected - protected  (still)
        public - protected              <----------

class Point2D : privated Point
                everything what is inside Point (excluiding the Constructor and Destructor)
                will be in Point2D
        private - CANNOT ACCESS
        protected - private           <----------
        public - private              <----------
*/

class Point3D : public Point2D
{           //when is public we take only the things in public without the constructor and destructor
    protected:
        int z;   // we inhereted x and y from point and point2D respectively
    public:   
        Point3D(int =0,int =0,int =0);  // giving a defualt value for the integer in the constructor
        ~Point3D();

       
};


#endif // POINT_H_INCLUDED