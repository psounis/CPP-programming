/* CPP3.sizeof.cpp Μέγεθος αντικειμένου */
#include <iostream>
using namespace std;

class dummy {
  public:
    int x;
    int y;
};

int main()
{ 
    dummy ob;   

    cout<<sizeof ob<<endl;      

    return 0;
}
