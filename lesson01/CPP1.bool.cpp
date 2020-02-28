/* CPP1.bool.cpp Χρήση λογικών μεταβλητών */
#include <iostream>
using namespace std;

int main(){
    bool x = true;

    // Αριθμητική τιμή μίας λογικής μεταβλητής
    cout<<x<<endl;        

    // Μετατροπή αριθμού σε λογική μεταβλητή
    x = 4;
    cout<<x<<endl;        

    // Μία συνθήκη που ερμηνεύεται σε μεταβλητή bool.
    x = !(0>1);    
    if (x)
        cout<<x<<endl;    

    return 0;
}


