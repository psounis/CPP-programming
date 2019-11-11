/* cpp11.method_overriding.cpp */ 

#include <iostream>
#include <string>
using namespace std;

class animal {
  public:
    animal(int in_weight, int in_height); 
    int get_weight() const; 
    int get_height() const; 
    void set_weight(int in_weight);
    void set_height(int in_height);
    void make_sound(); 
  private:
    int weight; 
    int height; 
};

class dog: public animal {
  public:
    dog(int in_weight, int in_height, string in_house_address);
    void set_house_address(string in_house_address);
    string get_house_address() const;
    void make_sound(); 
    friend ostream &operator<<(ostream &left, const dog &right);
  private:
    string house_address; 
};

class cat: public animal {
  public:
    cat(int in_weight, int in_height);
    void make_sound(); 
    friend ostream &operator<<(ostream &left, const cat &right);
};


int main()
{
    dog piko(10,35,"Left Hill 154"); 
    cat kitty(6, 20);
    animal an(40, 80);
    
    piko.make_sound();
    kitty.make_sound();
    an.make_sound();
    
    return 0; 
}


animal::animal(int in_weight, int in_height)
{
    weight = in_weight; 
    height = in_height; 
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

void animal::make_sound() 
{
    cout<<"Animal sound"<<endl;
}



dog::dog(int in_weight, int in_height, string in_house_address):
  animal(in_weight, in_height)
{
    house_address=in_house_address; 
}

void dog::set_house_address(string in_house_address)
{
    house_address = in_house_address; 
}

string dog::get_house_address() const
{
    return house_address; 
}

void dog::make_sound() 
{
    cout<<"Arf arf"<<endl;
}

ostream &operator<<(ostream &left, const dog &right)
{
    left<<"weight: "<<right.get_weight()<<endl;  
    left<<"height: "<<right.get_height()<<endl;  
    left<<"address: "<<right.house_address<<endl; 
}



cat::cat(int in_weight, int in_height):
   animal(in_weight, in_height)
{}

void cat::make_sound()
{
    cout<<"Meooooww"<<endl;
}

ostream &operator<<(ostream &left, const cat &right)
{
    left<<"weight: "<<right.get_weight()<<endl;  
    left<<"height: "<<right.get_height()<<endl;  
}