/* cpp5.this_constructor.cpp : this και constructor */

#include <iostream>
using namespace std;

class point {
   public:
      point(int x, int y);
      void print();
   private:
      int x;
      int y;
};

int main()
{
    point ob(3,4);
    
    ob.print();
    
    return 0;
}

point::point(int x, int y)
{
    this->x=x;
    this->y=y;
}

void point::print()
{
    cout<<"("<<x<<","<<y<<")";
}