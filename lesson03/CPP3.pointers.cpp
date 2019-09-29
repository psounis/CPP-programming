/* CPP3.pointers.cpp */

#include <iostream>
using namespace std;

int main()
{
    int x=5; 
    int *p = NULL;

    p = &x;  

    cout<<"x = "<<x<<" (address: "<<&x<<")"<<endl;      
    cout<<"*p = "<<*p<<" (address: "<<p<<")"<<endl;        
    return 0;
}
