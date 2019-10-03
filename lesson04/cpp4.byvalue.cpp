/*cpp4.byvalue.cpp: Πέρασμα ορίσματος μέσω τιμής */
#include <iostream>
using namespace std;

void change(int vA);

int main()
{
    int a=1;
    
    cout<<"main: a="<<a<<endl;
    change(a);
    cout<<"main: a="<<a<<endl;
    
    return 0;
}

void change(int vA)
{
    vA=2;
    cout<<"change: vA="<<vA<<endl;
}
