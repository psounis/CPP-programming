/* cpp10.inheritance_destructors.cpp */ 

#include <iostream>
#include <string>
using namespace std;

class animal {
  public:
    animal(int in_weight, int in_height); 
    ~animal();
    int get_weight() const; 
    int get_height() const; 
    void set_weight(int in_weight);
    void set_height(int in_height);
  private:
    int weight; 
    int height; 
};

class dog: public animal {
  public:
    dog(int in_weight, int in_height, string in_house_address);
    ~dog(); 
    void bark(); 
    void set_house_address(string in_house_address);
    string get_house_address() const;
    friend ostream &operator<<(ostream &left, const dog &right);
  private:
    string house_address; 
};


int main()
{
    dog piko(10,35,"Left Hill 154"); 
    
    piko.bark();
    cout<<piko; 
    return 0; 
}


animal::animal(int in_weight, int in_height)
{
    cout<<"Constructing Animal..."<<endl;
    weight = in_weight; 
    height = in_height; 
}

animal::~animal()
{
    cout<<"Destructing Animal..."<<endl;
}

void animal::set_weight(int in_weight)
{
    weight = in_weight; 
}

void animal::set_height(int in_height)
{
    height = in_height; 
}

int animal::get_weight() const
{
    return weight; 
}

int animal::get_height() const
{
    return height; 
}



dog::dog(int in_weight, int in_height, string in_house_address):
  animal(in_weight, in_height)
{
    cout<<"Constructing Dog..."<<endl;
    house_address=in_house_address; 
}

dog::~dog()
{
    cout<<"Destructing Dog..."<<endl;
}

void dog::bark()
{
    cout<<"arf arf!"<<endl;
}

void dog::set_house_address(string in_house_address)
{
    house_address = in_house_address; 
}

string dog::get_house_address() const
{
    return house_address; 
}

ostream &operator<<(ostream &left, const dog &right)
{
    //left<<"weight: "<<weight;  //doesn't work 
    left<<"weight: "<<right.get_weight()<<endl;  
    //left<<"height: "<<height;  //doesn't work 
    left<<"height: "<<right.get_height()<<endl;  
    left<<"address: "<<right.house_address<<endl; 
}