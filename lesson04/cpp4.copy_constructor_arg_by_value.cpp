/*cpp4.copy_constructor_arg_by_value.cpp: Copy Constructor: Όρισμα μέσω τιμής */
#include <iostream>
using namespace std;

class dummy {
   public:
      dummy();
      dummy(const dummy &ob);
      ~dummy();
      int x;
};

void f(dummy arg);

int main()
{
    dummy d;
    
    cout<<"Main: Before calling f"<<endl;
    f(d); 
    cout<<"Main: After calling f"<<endl;
    
    return 0; 
}

dummy::dummy()
{
    cout<<"Constructing..."<<endl;
    x=0; 
}

dummy::dummy(const dummy &ob)
{
    cout<<"Copy constructor..."<<endl;
    x=ob.x+1;
}

dummy::~dummy()
{
    cout<<"Destructing..."<<endl;
}

void f(dummy arg)
{
    cout<<"In function..."<<endl;
}