/* cpp12.multiple_inheritance.cpp */

#include <iostream>
#include <string>
using namespace std;

class king {
    public:
        void set_realm(string in_realm);
        void rule(); 
    private:
        string realm; 
};

class philosopher {
    public:
        void set_philosophy(string in_philosophy);
        void think(); 
    private:
        string philosophy; 
};

class phil_king: public king, public philosopher {
    public:
        void routine();
};


int main()
{
    phil_king marcus_aurelius;
    
    marcus_aurelius.set_realm("Roman Empire");
    marcus_aurelius.set_philosophy("stoic");
    
    marcus_aurelius.routine(); 
}

void king::set_realm(string in_realm)
{
    realm = in_realm; 
}

void king::rule()
{
    cout<<"Now, I rule"<<endl;
}


void philosopher::set_philosophy(string in_philosophy)
{
    philosophy = in_philosophy;
}

void philosopher::think()
{
    cout<<"Now, I think"<<endl;
}

void phil_king::routine()
{
    think();
    rule();
    think(); 
}
