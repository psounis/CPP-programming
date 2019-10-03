/*cpp4.copy_arg_by_value.cpp: Δημιουργία αντιγράφου όταν αντικείμενο διοχετεύεται ως όρισμα */
#include <iostream>
using namespace std;

class dummy {
   public:
      dummy();
      ~dummy();
      int x; 
};

void f(dummy ob);

int main()
{
    dummy d; // καλείται ο constructor
    
    f(d); 
    
    return 0;
}

dummy::dummy()
{
    cout<<"Constructing..."<<endl;
}

dummy::~dummy()
{
    cout<<"Destructing..."<<endl;
}

void f(dummy ob)
{
    // το όρισμα είναι αντίγραφο
    
    // καταστρέφεται το αντίγραφο
}