/* cpp4.reference_mistake.cpp Συνηθισμένο λάθος στις αναφορές */
#include <iostream>
using namespace std;

int main()
{
    int x = 3, y=4;
    int &r = x;
    
    cout<<"r="<<r<<endl;
    
    r=y; // Προσπαθεί να αλλάξει την αναφορά

    cout<<"x="<<x<<endl; // Άλλαξε όμως το x

    return 0;
}