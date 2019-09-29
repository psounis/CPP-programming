/* CPP3.assignment_problem Δυναμική Δέσμευση και Τελεστής Ανάθεσης */
#include <iostream>
using namespace std;

class dummy {
  public:
    dummy();
    ~dummy();
    void set_val(int in_val);
    int get_val();
  private:
    int *p_val;
};

int main()
{ 
    dummy ob1;
    ob1.set_val(3);
    dummy ob2; 
    ob2 = ob1;     

    cout<<ob1.get_val()<<endl;
    cout<<ob2.get_val()<<endl;

    return 0;
}

dummy::dummy()
{
    p_val = new int;
    if (!p_val)  cout<<"Error allocating memory";
    
    cout<<"Constructing..."<<endl;
}
dummy::~dummy()
{
    delete p_val; 
    cout<<"Destructing..."<<endl;
}

void dummy::set_val(int in_val)
{
    *p_val = in_val; 
}

int dummy::get_val()
{
    return *p_val; 
}
