#include <iostream>




using namespace std;



class Shape

{


public:

    virtual int getArea()=0;

    void setWidth(int w)

    {

        width = w;

    }

    void setHeight(int h)

    {

        height = h;

    }

    void setRadius(int r)
    {

        radius = r;

    }

protected:

    int width;

    int height;

    int radius;

};




class Triangle: public Shape

{

public:

    int getArea()

    {
        return (width*height)/2;

    }

};



// class that calc area of a rectangle
class Rectangle: public Shape

{

public:

    int getArea()

    {
        return width*height;
    }




};

// class that calc area of a circle
class Circle: public Shape

{

public:

    int getArea()

    {
        return 3.14*(radius*radius); //peter put brackets
    }
};                          //fixed - peter



int main()

{

    int total_areas;

    Triangle Tri;

    Tri.setWidth(5);

    Tri.setHeight(7);


    cout << "Total Triangle area: " << Tri.getArea() << endl;


    Rectangle Rec;

    Rec.setWidth(5);

    Rec.setHeight(7);

    cout << "Area of Rectangle: " << Rec.getArea() << endl;


    Circle Rad;

    Rad.setRadius(4);

    cout << "Area of Circle: " << Rad.getArea() << endl;

    total_areas = Tri.getArea()+Rec.getArea()+Rad.getArea();

    cout << "Total area of shapes " << total_areas <<endl;

    return 0;

}
