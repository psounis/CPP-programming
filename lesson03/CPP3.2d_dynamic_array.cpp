/* CPP3.2d_dynamic_array.cpp Διδιάστατος πίνακας με δυναμική δέσμευση μνήμης */
#include <iostream>
using namespace std;

int main()
{ 
    int **arr; 
    int i,j, n=4, m=4; 
    
    /* Δέσμευση Μνήμης */
    arr = new int * [n];
    if (!arr) cout<<"Error allocating memory!";
    for (i=0; i<n; i++)
    {
        arr[i] = new int [m];
        if (!arr[i]) cout<<"Error allocating memory!";
    }

    /* Κάποια δουλειά στον πίνακα */

    for (i=0; i<n; i++)
        for (j=0; j<m; j++)
            arr[i][j]=i*j; 
        
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
            cout<<arr[i][j]; 
        cout<<endl;
    }
        
    /* Αποδέσμευση Μνήμης */
    for (i=0; i<n; i++)
        delete [] arr[i];
    delete [] arr; 
    
    return 0;
}
