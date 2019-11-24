/* cpp13.swap.cpp Template function */

#include <iostream>
using namespace std;

template <typename T>
void myswap(T &a, T &b);


int main()
{
    int a=2, b=3;
    
    cout<<"a="<<a<<" b="<<b<<endl;
    
    myswap<int>(a,b);
    
    cout<<"a="<<a<<" b="<<b<<endl;
    return 0; 
}

template <typename T>
void myswap(T &a, T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp; 
}