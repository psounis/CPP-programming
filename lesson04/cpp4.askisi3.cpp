/* cpp4.askisi3.cpp */

#include <iostream>
using namespace std;

class ARRAY {
  public:
    ARRAY(int in_n);
    ARRAY(const ARRAY &ob);
    ~ARRAY();
    void set_i(int i, int val);
    int get_i(int i);
    int get_n() const; 
    void print();
  private:
    int *p;
    int n;
};


int main()
{
    int n=10;
    ARRAY pin(n);
    ARRAY pin2 = pin; 
    
    for (int i=0; i<n; i++)
        pin.set_i(i,i*i);
    
    pin.print();

    cout<<"\n";

    for (int i=0; i<n; i++)
        pin2.set_i(i,i*i*i);
    
    pin2.print();

    
    return 0;
}

ARRAY::ARRAY(int in_n)
{
    n = in_n; 
    
    p = new int [n];
    if (!p)
        cout<<"Error allocating memory!";
}

ARRAY::ARRAY(const ARRAY &ob)
{
    n = ob.get_n(); 
    
    p = new int [n];
    if (!p) cout<<"Memory Allocation Error!";
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

int ARRAY::get_n() const
{
    return n;
}

void ARRAY::print()
{
    int i;
    
    for (i=0; i<n; i++)
        cout<<p[i]<<" ";
}