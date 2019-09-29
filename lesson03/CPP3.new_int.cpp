/* CPP3.new_int.cpp Δεσμευση μνήμης για ακέραιο */

#include <iostream>
using namespace std;

int main()
{
    int x; // Μεταβλητή που δεσμέυει στατικό χώρο
    int *p; // Δείκτης σε ακέραιο
    
    p = new int; // Δυναμική δέσμευση μνήμης
    
    /* Αναθέσεις τιμών */
    x = 5;
    *p = 1;
    
    /* Εκτυπώσεις */
    cout<<"x = "<<x<<" (address: "<<&x<<")"<<endl;
    cout<<"*p = "<<*p<<" (address: "<<p<<")"<<endl;

    delete p; // Αποδέσμευση μνήμης

    return 0;
}
