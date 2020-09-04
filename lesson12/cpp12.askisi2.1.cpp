/* cpp12.askisi2.1.cpp */ 

#include <iostream>
#include <string>
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
    void serve(int customers, barista &b);
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
{
    customers_served=0; 
}

void waiter::serve(int customers, barista &b)
{
    b.prepare(); 
    customers+=customers; 
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
