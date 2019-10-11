/* CPP5.class_with_objects.cpp Κλάση που περιέχει αντικείμενα */ 
#include <iostream>
using namespace std; 

class flat {
  public:
    flat();
    ~flat();
    void set_people(int in_people);
    int get_people() const;
  private:
    int people; 
};

class storey {
  public:
    storey();
    ~storey(); 
    void set_people(int in_flat, int in_people);
    int get_people() const;
  private:
    flat flats[2];
};


class building {
  public:
    building();
    ~building(); 
    void set_people(int in_floor, int in_flat, int in_people);
    int get_people() const;
  private:
    storey storeys[2];
};

int main()
{
    building b; 
    
    b.set_people(0,0,3);
    b.set_people(0,1,2);
    b.set_people(1,0,2);
    b.set_people(1,1,1);
    
    cout<<endl;
    cout<<"People in building: "<<b.get_people(); 
    cout<<endl<<endl; 
    
    return 0; 
}

flat::flat()
{
    people=0; 
    cout<<"Constructing flat..."<<endl;
}
flat::~flat()
{
    cout<<"Destructing flat..."<<endl;
}
void flat::set_people(int in_people)
{
    people = in_people;
}
int flat::get_people() const
{
    return people; 
}



storey::storey()
{
    cout<<"Constructing storey..."<<endl;
}
storey::~storey()
{
    cout<<"Destructing storey..."<<endl; 
}
void storey::set_people(int in_flat, int in_people)
{
    flats[in_flat].set_people(in_people);
}
int storey::get_people() const
{
    return flats[0].get_people()+flats[1].get_people(); 
}


building::building()
{
    cout<<"Constructing building..."<<endl;
}
building::~building()
{
    cout<<"Destructing building..."<<endl; 
}
void building::set_people(int in_storey, int in_flat, int in_people)
{
    storeys[in_storey].set_people(in_flat, in_people);
}
int building::get_people() const
{
    return storeys[0].get_people()+storeys[1].get_people(); 
}
