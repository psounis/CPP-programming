/* cpp8.string_add_rem_upd.cpp */ 

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s("0123456789");
    
    cout<<"Initial:    "<<s<<endl;
    
    s.append("abcd");
    s.push_back('.');
    s.insert(3,"ABC");
    
    cout<<"Insertions: "<<s<<endl;
    
    s.pop_back();
    s.erase(3,3);
    
    cout<<"Deletions:  "<<s<<endl;

    s.replace(2,4,string("ABCD"),0,4);
    
    cout<<"Replace:    "<<s<<endl;


    s.clear();

    cout<<"Cleared:    "<<s<<endl;
    
    return 0; 
}
