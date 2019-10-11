/* CPP5.dynamic_array_of_objects.cpp : Δυναμικός Πίνακας Αντικειμένων  */

#include <iostream>
using namespace std;

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
    dummy *array;
    int n=3; 
    
    array = new dummy [n];
    if (!array) cout<<"Mem error";
    
    for (int i=0; i<n; i++)
        array[i].set_x(i*i);    
    
    for (int i=0; i<n; i++)
        cout<<array[i].get_x()<<" ";

    delete [] array;

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