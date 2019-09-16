#include <iostream>
using namespace std;

int main() 
{
    char name[80];
    char surname[80];
    int age;
    
    cout<<"Dwse to onoma: ";
    cin>>name;
    cout<<"Dwse to epwnimo: ";
    cin>>surname;
    cout<<"Dwse ilikia: ";
    cin>>age;
    
    cout<<name<<" "<<surname<<" ("<<age<<")";
    
    return 0;
}

