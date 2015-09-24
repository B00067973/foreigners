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
    int total_areas_average;
    int biggest,smallest;

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

    total_areas_average = total_areas/3;

    cout << "Total area of shapes " << total_areas <<endl;

    cout << "Total Area Average " << total_areas_average<<endl;

    if(Rad.getArea()<Rec.getArea()&&Rad.getArea()<Tri.getArea()){
    smallest=Rad.getArea();
    };
    if (Rad.getArea()>Rec.getArea()&&Rad.getArea()>Tri.getArea()){
    biggest=Rad.getArea();}
    if (Rec.getArea()>Rad.getArea()&&Rec.getArea()>Tri.getArea()){
    biggest=Rec.getArea();}
    if (Rec.getArea()<Rad.getArea()&&Rec.getArea()<Tri.getArea()){
    smallest=Rec.getArea();}
    if (Tri.getArea()<Rad.getArea()&&Tri.getArea()<Rec.getArea()){
    smallest=Tri.getArea();}
    if (Tri.getArea()>Rad.getArea()&&Tri.getArea()>Rec.getArea()){
    biggest=Tri.getArea();}
    cout<<"biggest Area ="<<biggest<<endl;
    cout<<"smallest Area ="<<smallest<<endl;


    return 0;

}
