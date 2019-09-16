/* break.cpp: Deixnei tin xrisi tis break */

#include <iostream>
using namespace std;

#define N 5

int main()
{
    int i;
    int A[N]= {5, 3, 2, 4, 8 }; // Pinakas dedomenwn
    int x=7; // Pros anazitisi stoixeio
    bool found;

    /* Psaxnoume gia to stoixeio x ston pinaka A */    
    found = false;
    for (i=0; i<N; i++)
    {
        if (A[i]==x)
        {
            found=true;
            break;
        }
           
    }
    
    if (found) 
      cout<<endl<<"Vrethike to stoixeio "<<x<<" sti thesi "<<i;
    else 
      cout<<endl<<"Den vrethike to stoixeio";

    return 0;
}

