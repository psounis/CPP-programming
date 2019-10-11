/* cpp5.name_collisions.cpp : Συγκρούσεις ονομάτων */

#include <iostream>
using namespace std;

class dummy {
   public:
      dummy() { x = 2; };
      void print(int x);
   private:
      int x; // class member = 2
};

int x=1; // global = 1

int main()
{
    dummy ob;
    int x=3; 
    
    ob.print(x);
    
    return 0;
}

void dummy::print(int x) // argument = 3
{
    int x = 4; // local = 4
    cout<<x; 
}
