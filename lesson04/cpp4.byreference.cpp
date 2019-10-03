/*cpp4.byreference.cpp: Πέρασμα ορίσματος μέσω αναφοράς */
#include <iostream>
using namespace std;

void change(int &rA);

int main()
{
    int a=1;
    
    cout<<"main: a="<<a<<endl;
    change(a);
    cout<<"main: a="<<a<<endl;
    
    return 0;
}

void change(int &rA)
{
    rA=2;
    cout<<"change: rA="<<rA<<endl;
}
