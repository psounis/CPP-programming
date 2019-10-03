/*cpp4.copy_constructor_object_declaration.cpp: Δήλωση αντικειμένου μέσω άλλου αντικειμένου */
#include <iostream>
using namespace std;

class dummy {
   public:
      dummy();
      dummy(const dummy &ob);
      ~dummy();
      int x;
};

void f(dummy ob);

int main()
{
    dummy ob1;
    dummy ob2 = ob1; // dummy ob2(ob1);

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
    x=10;
}

dummy::~dummy()
{
    cout<<"Destructing..."<<endl;
}
