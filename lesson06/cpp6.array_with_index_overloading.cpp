/* cpp6.array_with_index_overloading.cpp */

#include <iostream>
using namespace std;

class ARRAY {
  public:
    ARRAY(int in_n);
    ARRAY(const ARRAY &ob);
    ~ARRAY();
    int get_n() const; 
    int &operator[] (int i);
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
        pin[i]=i*i;
    
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

int &ARRAY::operator[] (int i)
{
    if (i>=0 && i<n) 
        return p[i]; 
    else
        cout<<"Index Error";
    
}
