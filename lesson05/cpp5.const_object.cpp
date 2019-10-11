/* cpp5.const_object.cpp Const Αντικείμενα */ 
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

int main()
{
    const dummy ob(3); 
    
    //ob.set_x(4); //error
    
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
