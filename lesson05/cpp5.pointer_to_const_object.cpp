/* cpp5.pointer_to_const_object.cpp Δείκτης προς const αντικείμενο */ 
#include <iostream>
using namespace std;

class dummy {
public:
    dummy (int in_x);
    int get_x() const;
    void set_x(int in_x);
private:
    int x;
};

void f(const dummy *p);

int main()
{
    dummy ob(3); 
    
    f(&ob);
    
    return 0; 
}

dummy::dummy(int in_x)
{
    x=in_x; 
}

int dummy::get_x() const
{
    return x; 
}

void dummy::set_x(int in_x)
{
    x=in_x; 
}

void f(const dummy *p)
{
    cout<<p->get_x();
    // p->set_x(2); // error
}