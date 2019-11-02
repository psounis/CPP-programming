/* cpp8.static_members.cpp */ 

#include <iostream>
#include <cstdlib>
using namespace std;

#define N 5

class orc {
  public:
    static int alive_orcs;
    orc(); 
    ~orc(); 
  private:
    int h; 
};

int orc::alive_orcs = 0; 

int main()
{
    orc *arr[N];
    int i, pos; 
    
    for (i=0; i<N; i++) 
        arr[i]=NULL;
    
    for (i=0; i<100; i++)
    {
        pos = rand()%N; 
        
        if (arr[pos]==NULL)
        {
            arr[pos]=new orc; 
            if (!arr[pos]) exit(0);
        }
        else 
        {
            delete arr[pos];
            arr[pos]=NULL;
        }
            
            
        if (i%10==0)
            cout<<"Step "<<i<<": Alive orcs = "<<orc::alive_orcs<<endl; 
    }
    return 0; 
}

orc::orc()
{
    alive_orcs++; 
}

orc::~orc()
{
    alive_orcs--; 
}