//Huynh Phuong Dai - ITITWE21039
#include <iostream>
#include <cmath>

using namespace std;

class Rectangle
{
    private:
        int width,height;
    public:
        void getheight();
        void getwidth();
        void getperimeter(Rectangle);
        void getarea(Rectangle);
};

void Rectangle::getheight()
{
    cout << "Input the height of the triangle"<<endl;
    cin >>height;
}

void Rectangle::getwidth()
{
    cout << "Input the width of the triangle"<<endl;
    cin >>width;
}

void Rectangle::getperimeter(Rectangle t)
{   
    float P;
    P=t.width+t.height+sqrt(t.width*t.width+t.height*t.height);
    cout << "perimeter= "<<P <<endl;
}

void Rectangle::getarea(Rectangle t)
{
    float A;
    A=t.width*t.height;
    cout << "Area= " << A<<endl;
}

int main()
{
    Rectangle a;
    a.getwidth();
    a.getheight();
    a.getperimeter(a);
    a.getarea(a);
    return 0;
}