/*cpp4.copy_constructor_return_ob.cpp: Copy Constructor: Επιστροφή αντικειμένου */
#include <iostream>
using namespace std;

class dummy {
   public:
      dummy();
      dummy(const dummy &ob);
      ~dummy();
      int x;
};

dummy f();

int main()
{
    cout<<"Main: Before calling f"<<endl;
    f(); 
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
    x=10;
}

dummy::~dummy()
{
    cout<<"Destructing ..."<<endl;
}

dummy f()
{
    dummy ob;
    cout<<"In function..."<<endl;
    return ob;
}