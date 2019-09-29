/* CPP3.constructor_destructor.cpp */
#include <iostream>
using namespace std;

class dummy {
  public:
    dummy(int in_x);
    ~dummy();
  private:
    int x;
};

int main()
{ 
    dummy *p = NULL;
    
    p = new dummy(5); //constructing
    if (!p) cout<<"Error allocating memory";
    
    cout<<endl;

    delete p; //destructing
    return 0;
}

dummy::dummy(int in_x)
{
    x = in_x;
    cout<<"Constructing...";
}

dummy::~dummy()
{
    cout<<"Destructing...";
}
