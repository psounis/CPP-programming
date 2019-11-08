/* cpp10.askisi2.3-2.4.cpp */

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

class land: public card {
  public:
    land(string in_name, string in_color, string in_rarity, int in_mana, string in_descr, bool in_tap);
    friend ostream &operator<<(ostream &left, land &right);
  private: 
    int mana; 
    string descr; 
    bool tap; 
};

int main()
{
    creature c("Akroan Crusader", "red", "common",1,1,"Human Soldier");
    cout<<c; 
    
    creature c2("Rune-Scarred Demon", "black", "rare",6,6,"Demon");
    cout<<c2; 
    
    land c3("Plains", "white", "uncommon", 1, "Basic Land - Plains", false);
    cout<<c3; 
 
    card pin[7];
    
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



land::land(string in_name, string in_color, string in_rarity, int in_mana, string in_descr, bool in_tap):
  card(in_name, in_color, in_rarity)
{
    mana = in_mana; 
    descr = in_descr; 
    tap = in_tap; 
}

ostream &operator<<(ostream &left, land &right)
{
    left<<"("<<right.name<<","<<right.color<<","<<right.rarity<<",";
    left<<right.mana<<","<<right.descr<<",";
    if (right.tap)
        left<<"tapped";
    else
        left<<"untapped";
    
    left<<")";
    
    return left; 
}