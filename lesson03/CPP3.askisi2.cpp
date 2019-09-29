/* CPP3.askisi2.cpp */

#include <iostream>
using namespace std;

class ARRAY {
  public:
    ARRAY(int in_n);
    ~ARRAY();
    void set_i(int i, int val);
    int get_i(int i);
    void print();
  private:
    int *p;
    int n;
};


int main()
{
    int n=10;
    ARRAY pin(n);
    
    for (int i=0; i<n; i++)
        pin.set_i(i,i*i);
    
    pin.print();
    
    return 0;
}

ARRAY::ARRAY(int in_n)
{
    n = in_n; 
    
    p = new int [n];
    if (!p)
        cout<<"Error allocating memory!";
}

ARRAY::~ARRAY()
{
    delete [] p;
}

void ARRAY::set_i(int i, int val)
{
    if (i>=0 && i<n)
        p[i]=val;
    else
        cout<<"Error: Out of bounds!";
}

int ARRAY::get_i(int i)
{
    if (i>=0 && i<n)
        return p[i];
    else
        cout<<"Error: Out of bounds!";
}

void ARRAY::print()
{
    int i;
    
    for (i=0; i<n; i++)
        cout<<p[i]<<" ";
}