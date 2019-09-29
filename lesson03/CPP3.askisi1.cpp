/* CPP3.askisi1.cpp */

#include <iostream>
using namespace std;


int main()
{
    int x = 5;
    int *p;
    int **pp;
    
    p=&x;
    pp=&p;
    
    cout<<"x="<<x<<" (address: "<<&x<<")"<<endl;
    cout<<"p="<<p<<" (address: "<<&p<<")"<<endl;
    cout<<"x=(*p)="<<*p<<endl;
    cout<<"pp="<<pp<<" (address: "<<&pp<<")"<<endl;
    cout<<"x=(**pp)="<<**pp<<endl;
    cout<<"p=(*p)="<<*pp<<endl;
    
    return 0;
}
