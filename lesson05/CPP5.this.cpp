/* CPP5.this.cpp : Ο δείκτης this */

#include <iostream>
using namespace std;

class point {
   public:
      point(int in_x, int in_y);
      point *ret_this();
      void print();
   private:
      int x;
      int y;
};

int main()
{
    point ob(3,4);
    
    cout<<"Address: "<<&ob<<endl;
    cout<<"Address: "<<ob.ret_this()<<endl;
    
    return 0;
}

point::point(int in_x, int in_y)
{
    x=in_x;
    y=in_y;
}

point *point::ret_this()
{
    return this;
}

void point::print()
{
    cout<<"("<<x<<","<<y<<")";
}