/* cpp12.mi_constructors.cpp */

#include <iostream>
#include <string>
using namespace std;

class king {
    public:
        king(string in_realm);
        ~king(); 
        void set_realm(string in_realm);
        void rule(); 
    private:
        string realm; 
};

class philosopher {
    public:
        philosopher(string in_philosophy);
        ~philosopher(); 
        void set_philosophy(string in_philosophy);
        void think(); 
    private:
        string philosophy; 
};

class phil_king: public king, public philosopher {
    public:
        phil_king(string in_realm, 
                          string in_philosophy);
        ~phil_king();     
        void routine();
};


int main()
{
    phil_king marcus_aurelius("Roman Empire", "stoic");

    marcus_aurelius.routine(); 
}


king::king(string in_realm)
{
    realm = in_realm; 
    cout<<"Constructing King"<<endl;
}
king::~king()
{
    cout<<"Destructing King"<<endl; 
}

void king::set_realm(string in_realm)
{
    realm = in_realm; 
}

void king::rule()
{
    cout<<"Now, I rule"<<endl;
}



philosopher::philosopher(string in_philosophy)
{
    philosophy = in_philosophy; 
    cout<<"Constructing Philosopher"<<endl;
}
philosopher::~philosopher()
{
    cout<<"Destructing Philosopher"<<endl;
}

void philosopher::set_philosophy(string in_philosophy)
{
    philosophy = in_philosophy;
}

void philosopher::think()
{
    cout<<"Now, I think"<<endl;
}


phil_king::phil_king(string in_realm, string in_philosophy):
    king(in_realm), philosopher(in_philosophy)
{
    cout<<"Constructing Philosopher King"<<endl;
}
phil_king::~phil_king() {
    cout<<"Destructing Philosopher King"<<endl;
}

void phil_king::routine()
{
    think();
    rule();
    think(); 
}
