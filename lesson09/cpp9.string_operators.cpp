/* cpp8.string_operators.cpp */ 

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1("abcd");
    string s2; 
    
    s2=s1+s1+s1;
    
    s2[4]='A';
    
    if (s1>s2)
        cout<<s1;
    else 
        cout<<s2;

    return 0; 
}
