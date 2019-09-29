/* CPP3.dynamic_object.cpp Δυναμική Δέσμευση μνήμης για αντικείμενο */
#include <iostream>
using namespace std;

class dummy {
    public:
        int x; 
};

int main()
{    
    dummy *p = NULL; //Θα δείξει σε αντικείμενο 
    p = new dummy; // Δέσμευση χώρου        
    if (!p) cout<<"Error allocating memory";

    /* Αναθέσεις τιμών */   
    p->x = 5;
    
    /* Εκτυπώσεις */    
    cout<<"p->x = "<<p->x<<endl;      

    delete p; // Αποδέσμευση μνήμης    

    return 0;
}
