/* cpp10.public_inheritance.cpp */ 

#include <iostream>
#include <string>
using namespace std;

class animal {
  public:
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
    void bark(); 
    void set_house_address(string in_house_address);
    string get_house_address() const;
    friend ostream &operator<<(ostream &left, const dog &right);
  private:
    string house_address; 
};


int main()
{
    dog piko; 
    
    piko.set_house_address("Left Hill 154");
    piko.set_weight(10);
    piko.set_height(35);


    piko.bark();
    cout<<piko; 
    return 0; 
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
    left<<"address: "<<right.house_address; 
}