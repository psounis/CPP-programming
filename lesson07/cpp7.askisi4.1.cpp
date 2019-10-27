/* cpp7.askisi4.1.cpp */ 

#include <iostream>
using namespace std;

class point
{
   public:
     point(int in_x, int in_y);
     int get_x() const; 
     int get_y() const; 
     void set_x(int in_x);
     void set_y(int in_y);
     friend ostream &operator<<(ostream &left, const point &right);
   private:
     int x; 
     int y; 
};


int main()
{
    point p(63,65);
    
    cout<<p; 
    return 0; 
}

point::point(int in_x, int in_y)
{
    if (in_x>=0 && in_x<60)
        x = in_x; 
    else
    {
        cout<<"Lathos stin x-syntetagmeni. ";
        x = 0; 
    }
    
    if (in_y>=0 && in_y<60)
        y = in_y; 
    else
    {
        cout<<"Lathos stin y-syntetagmeni. ";
        y = 0; 
    }
}

int point::get_x() const
{
    return x; 
}

int point::get_y() const
{
    return y;
}
void point::set_x(int in_x)
{
    x = in_x; 
}

void point::set_y(int in_y)
{
    y = in_y;
}

ostream &operator<<(ostream &left, const point &right)
{
    cout<<"("<<right.x<<","<<right.y<<")";
    
    return left; 
}