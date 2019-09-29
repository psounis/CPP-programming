/* CPP3.pointers_and_objects.cpp Δείκτης σε αντικείμενο */
#include <iostream>
using namespace std;

class dummy {
  public:
    int x;
};

int main()
{ 
    dummy ob;   
    dummy *p = &ob; 
    if (!p) cout<<"Error allocating memory";

    /* Αναθέσεις τιμών */    
    ob.x = 6; 
    
    /* Εκτυπώσεις */    
    cout<<ob.x<<" "<<p->x<<" "<<(*p).x<<endl;      

    return 0;
}
