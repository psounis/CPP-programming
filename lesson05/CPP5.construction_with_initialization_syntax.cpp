/*cpp5.construction_with_initialization_syntax.cpp: Εναλλακτικός τρόπος αρχικοποίησης μελών κλάσης από το constructor */
#include <iostream>
using namespace std;

class dummy {
   public:
      dummy(int in_x, int in_y);
      void print();
   private:
      int x,y;
};

int main()
{
    dummy ob (3,4);
    
    ob.print(); 
    
    return 0; 
}

dummy::dummy(int in_x, int in_y): 
x(in_x), y(in_y)
{
    cout<<"Constructing..."<<endl;
}

void dummy::print()
{
    cout<<x<<" "<<y; 
}