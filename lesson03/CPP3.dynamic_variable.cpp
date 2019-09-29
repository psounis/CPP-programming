#include <iostream> // CPP3.dynamic_variable.cpp 
using namespace std;

int main()
{    
    int x; // Μεταβλητή που δεσμέυει στατικό χώρο    
    int *p; // Δείκτης σε ακέραιο        
   
    p = new int; // Δυναμική δέσμευση μνήμης        
    if (!p) cout<<“Error allocating memory”;

    /* Αναθέσεις τιμών */    
    x = 1;    
    *p = 5;        
    /* Εκτυπώσεις */    
    cout<<"x = "<<x<<" (address: "<<&x<<")"<<endl;      
    cout<<"*p = "<<*p<<" (address: "<<p<<")"<<endl;    

    delete p; // Αποδέσμευση μνήμης    

    return 0;
}
