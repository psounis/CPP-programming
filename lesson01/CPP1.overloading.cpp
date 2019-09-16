/* CPP1.overloading.cpp  Υπερφόρτωση Συναρτήσεων */

#include <iostream>
using namespace std;

int sum(int x, int y);
double sum(double x, double y);

int main()
{    
    cout<<sum(5,3);    
    cout<<" ";    
    cout<<sum(1.1,2.2); 
    return 0;
}

int sum(int x, int y)
{    
    return x+y;
}

double sum(double x, double y)
{    
     return x+y;
}



