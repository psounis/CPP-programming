/* cpp10.protected_members.cpp */ 

#include <iostream>
#include <string>
using namespace std;

class B {
    public: 
      int pub; 
      void f();
    protected:
      int pro; 
    private:
      int pri;
};

class D: public B {
    public:
      void g();
};

int main()
{
    B b; 
    b.pub=1;
    //b.pro=1; //no access
    //b.pri=1; //no access
    D d;
    d.pub=1;
    //d.bpro=1; //no access
    //d.bpri=1; //no access
}

void B::f()
{
    pub=1;
    pro=1;
    pri=1; 
}

void D::g()
{
    pub=1;
    pro=1;
    //pri=1; //no access
}