/* cpp8.string.cpp */ 

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s("Initial string");
    
    cout<<s<<endl; 
    
    cout<<"Give new string: ";
    getline(cin, s);
    
    cout<<s; 

    return 0; 
}
