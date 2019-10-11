/* CPP5.array_of_pointers_to_objects.cpp : Πίνακας που περιέχει δείκτες σε αντικείμενα */

#include <iostream>
using namespace std;

#define N 3

class dummy {
   public:
     dummy();
     void set_x(int in_x);
     int get_x() const; 
   private:
     int x; 
};

int main()
{
    dummy *array[N];
    
    for (int i=0; i<N; i++)
        array[i] = new dummy;    

    for (int i=0; i<N; i++)
        array[i]->set_x(i*i);    
    
    for (int i=0; i<N; i++)
        cout<<array[i]->get_x()<<" ";

    for (int i=0; i<N; i++)
        delete array[i];    

    return 0;
}

dummy::dummy() 
{
    x=0; 
}

void dummy::set_x(int in_x)
{
    x=in_x; 
}

int dummy::get_x() const
{
    return x; 
}