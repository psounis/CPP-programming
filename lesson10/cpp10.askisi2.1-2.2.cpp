/* cpp10.askisi2.1-2.2.cpp */

#include <iostream>
#include <string>
using namespace std;

class card {
  public:
    card(string in_name, string in_color, string in_rarity);
    friend ostream &operator<<(ostream &left, card &right);
  protected:
    string name; 
    string color; 
    string rarity; 
};

class creature: public card {
  public:
    creature(string in_name, string in_color, string in_rarity, int in_attack, int in_defense, string in_kind);
    friend ostream &operator<<(ostream &left, creature &right);
  private:
    int attack;
    int defense; 
    string kind; 
};


int main()
{
    creature c("Akroan Crusader", "red", "common",1,1,"Human Soldier");
    cout<<c; 
    
    creature c2("Rune-Scarred Demon", "black", "rare",6,6,"Demon");
    cout<<c2; 
    
    return 0;
}

card::card(string in_name, string in_color, string in_rarity)
{
    name = in_name;
    color = in_color; 
    rarity = in_rarity; 
}

ostream &operator<<(ostream &left, card &right)
{
    left<<"("<<right.name<<","<<right.color<<","<<right.rarity<<")";
    
    return left; 
}


creature::creature(string in_name, string in_color, string in_rarity, int in_attack, int in_defense, string in_kind):
  card(in_name, in_color, in_rarity)
{
    attack = in_attack;
    defense = in_defense; 
    kind = in_kind; 
}

ostream &operator<<(ostream &left, creature &right)
{
    left<<"("<<right.name<<","<<right.color<<","<<right.rarity<<",";
    left<<right.attack<<","<<right.defense<<","<<right.kind<<")";
    
    return left; 
}