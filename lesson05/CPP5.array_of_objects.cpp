/* CPP5.array_of_objects.cpp : Πίνακας που περιέχει αντικείμενα */

#include <iostream>
using namespace std;

#define N 3

class dummy {
   public:
     dummy();
     dummy(int in_x);
     int get_x() const; 
   private:
     int x; 
};

int main()
{
    dummy array[N] = {dummy(), dummy(3), dummy(5)};
    
    for (int i=0; i<N; i++)
        cout<<array[i].get_x()<<" ";

    return 0;
}

dummy::dummy() 
{
    x=0; 
}

dummy::dummy(int in_x) 
{
    x=in_x; 
}

int dummy::get_x() const
{
    return x; 
}