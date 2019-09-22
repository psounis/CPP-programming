#include <iostream>
using namespace std;

class point {
    public:
        point();
        point(double in_x, double in_y);
        void set_x(double in_x);
        void set_y(double in_y);
        double get_x() const;
        double get_y() const;
        void print();
    private:
        double x;
        double y;
};


int main()
{
    point ob1(1.1, 2.2);
    point ob2(1.0, 2.0); 
    point ob3;
    
    cout<<"1o simeio: ";
    ob1.print();
    cout<<endl<<"2o simeio: ";
    ob2.print();
    cout<<endl<<"3o simeio: ";
    ob3.print();
    
    return 0;
}

point::point() 
{
    x = 0.0;
    y = 0.0;
}

point::point(double in_x, double in_y)
{
    x = in_x; 
    y = in_y; 
}

void point::set_x(double in_x)
{
    x = in_x;
}

void point::set_y(double in_y)
{
    y = in_y;
}

double point::get_x() const
{
    return x;
}

double point::get_y() const
{
    return y;
}

void point::print()
{
    cout<<"("<<x<<","<<y<<")";
}