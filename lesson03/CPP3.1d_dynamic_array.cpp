/* CPP3.1d_dynamic_array.cpp Μονοδιάστατος πίνακας με δυναμική δέσμευση μνήμης */
#include <iostream>
using namespace std;

int main()
{ 
    int *arr; 
    int n=4; 
    
    /* Δέσμευση Μνήμης */
    arr = new int [n];
    if (!arr) cout<<"Error allocating memory!";
    
    /* Κάποια δουλειά στον πίνακα */
    for (int i=0; i<n; i++)
        arr[i]=i*i;

    for (int i=0; i<n; i++)
        cout<<arr[i]<<" ";
        
    /* Αποδέσμευση Μνήμης */
    delete [] arr; 
    
    return 0;
}
