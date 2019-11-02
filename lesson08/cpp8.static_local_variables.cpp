/* cpp8.static_local_variables.cpp */ 
#include <iostream>
using namespace std; 

void func();

int main()
{
      int i;
      
      for (i=0; i<10; i++)
          func();

      return 0; 
}
void func()
{
    int y=0;
    static int x=0; 
  
    x=x+1;
    y=y+1;
    cout<<endl<<"x="<<x<<", y="<<y;
}
