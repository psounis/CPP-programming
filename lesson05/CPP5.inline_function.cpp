/*cpp5.inline_function.cpp: Συνάρτηση inline */
#include <iostream>
using namespace std;

inline int sqr(int x);

int main()
{
    cout<<sqr(4); 
    
    return 0; 
}

int sqr(int x)
{
    return x*x; 
}