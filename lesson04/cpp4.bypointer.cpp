/*cpp4.bypointer.cpp: Πέρασμα ορίσματος μέσω δείκτη */
#include <iostream>
using namespace std;

void change(int *pA);

int main()
{
    int a=1;
    
    cout<<"main: a="<<a<<endl;
    change(&a);
    cout<<"main: a="<<a<<endl;
    
    return 0;
}

void change(int *pA)
{
    *pA=2;
    cout<<"change: *pA="<<*pA<<endl;
}
