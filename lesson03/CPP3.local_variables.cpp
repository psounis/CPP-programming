/* CPP3.local_variables.cpp */

#include <iostream>
using namespace std;

void f()
{
    int y;
    cout<<"inside f";
}

int main()
{
    int x; 

    cout<<"inside main";
    f();
    
    return 0;
}
