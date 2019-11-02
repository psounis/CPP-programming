/* cpp8.askisi2.cpp */
#include <iostream>
using namespace std;

int fib(int n);

int main()
{
    cout<<fib(17);
    return 0;
}

int fib(int n)
{
    static int calls = 0; 
    
    calls++; 
    cout<<calls<<endl; 
    
    if (n==1 || n==2)
        return 1; 
    else
        return fib(n-1)+fib(n-2);
}