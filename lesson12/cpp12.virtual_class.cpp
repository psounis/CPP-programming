/* cpp12.virtual_class.cpp */

#include <iostream>
#include <string>
using namespace std;


class person {
    public:
        person(); 
        person(string in_name);
    protected:
        string name; 
};

class king: virtual public person {
    public:
        king(string in_realm);
        void set_realm(string in_realm);
        void rule(); 
    protected:
        string realm; 
};

class philosopher: virtual public person {
    public:
        philosopher(string in_philosophy);
        void set_philosophy(string in_philosophy);
        void think(); 
    protected:
        string philosophy; 
};

class phil_king: public king, public philosopher {
    public:
        phil_king(string in_name, string in_realm, string in_philosophy);
        void routine();
        friend ostream &operator<<(ostream &left, phil_king right);
};


int main()
{
    phil_king The_King("Marcus Aurelius", "Roman Empire", "stoic");

    The_King.routine(); 
}

person::person() 
{}

person::person(string in_name)
{
    name = in_name; 
}


king::king(string in_realm)
{
    realm = in_realm; 
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
}

void philosopher::set_philosophy(string in_philosophy)
{
    philosophy = in_philosophy;
}

void philosopher::think()
{
    cout<<"Now, I think"<<endl;
}



phil_king::phil_king(string in_name, string in_realm, string in_philosophy):
    person(in_name), king(in_realm), philosopher(in_philosophy)
{
}

void phil_king::routine()
{
    think();
    rule();
    think(); 
}

ostream &operator<<(ostream &left, phil_king right)
{
    left<<right.name<<endl;
    left<<"Ruling "<<right.realm<<endl; 
    left<<"using "<<right.philosophy<<" philosophy"<<endl;
}
