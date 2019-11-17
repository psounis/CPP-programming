/* cpp12.askisi2.2.cpp */ 

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class person {
  public:
    person(); 
    person(string in_name, int in_salary);
  private:
    string name; 
    int salary; 
};

class barista: virtual public person {
  public:
    barista(); 
    barista(string in_name, int in_salary);
    void prepare();
  private:
};

class waiter: virtual public person {
  public:
    waiter(); 
    waiter(string in_name, int in_salary);
    void serve(int in_customers, barista &b);
    void print();
  private:
    int customers_served; 
};

class owner: public barista, public waiter {
  public:
    owner(string in_name, int in_salary);
  private: 
  
};

int main()
{
    int clients, waiter_to_serve, barista_to_serve;
    owner *o = new owner("Joe", 500);
    waiter *w1 = new waiter("Jack", 700);
    waiter *w2 = new waiter("Suzy", 1000);
    barista *b = new barista("bob", 400);
    
    waiter *waiters[3]={o,w1,w2};
    barista *baristas[2]={o,b};
    
    
    
    srand(time(NULL));
    for (int i=0; i<100; i++)
    {
        clients=1+rand()%5; 
        
        waiter_to_serve=rand()%3; 
        barista_to_serve=rand()%2;
        
        waiters[waiter_to_serve]->serve(clients, *baristas[barista_to_serve]);
    }
    
    for (int i=0; i<3; i++)
    {
        waiters[i]->print(); 
        cout<<endl; 
    }
    

    delete o;
    delete w1;
    delete w2;
    delete b;
    
    return 0; 
}

person::person(string in_name, int in_salary)
{
    name=in_name;
    salary=in_salary;
}

person::person()
{}


waiter::waiter(string in_name, int in_salary):
  person(in_name, in_salary)
{
    customers_served=0; 
}

waiter::waiter()
{}

void waiter::serve(int in_customers, barista &b)
{
    b.prepare(); 
    customers_served+=in_customers; 
}

void waiter::print()
{
    cout<<customers_served; 
}


barista::barista(string in_name, int in_salary):
  person(in_name, in_salary)
{
    
}

barista::barista()
{}


void barista::prepare()
{
    // cout<<....
}


owner::owner(string in_name, int in_salary):
  person(in_name, in_salary)
{ }