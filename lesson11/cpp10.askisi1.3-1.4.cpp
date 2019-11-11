/* cpp11.askisi1.3-1.4.cpp */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class card {
  public:
    card(string in_name, string in_color, string in_rarity);
    virtual void print(ostream &left);
    friend ostream &operator<<(ostream &left, card &right);
  protected:
    string name; 
    string color; 
    string rarity; 
};

class creature: public card {
  public:
    creature(string in_name, string in_color, string in_rarity, int in_attack, int in_defense, string in_kind);
    void print(ostream &left);
    friend ostream &operator<<(ostream &left, creature &right);
  private:
    int attack;
    int defense; 
    string kind; 
};

class land: public card {
  public:
    land(string in_name, string in_color, string in_rarity, int in_mana, string in_descr, bool in_tap);
    void print(ostream &left);
    friend ostream &operator<<(ostream &left, land &right);
  private: 
    int mana; 
    string descr; 
    bool tap; 
};


class pool {
  public:
    pool();
    ~pool();
    card *pick_random_card();
  private:
    card *cards[300];
    int n_cards; 
};

class hand {
  public:
    hand(pool &p); 
    void pick_card(pool &p, int i);
    void fill_hand(pool &p);
    friend ostream &operator<<(ostream &left, hand &right);
  private: 
    card *cards[10];
    int n_cards; 
};


int main()
{
    srand(time(NULL));

    pool p; 
    
    hand h(p);
    
    cout<<h; 

    return 0;
}




card::card(string in_name, string in_color, string in_rarity)
{
    name = in_name;
    color = in_color; 
    rarity = in_rarity; 
}

void card::print(ostream &left)
{
    left<<"("<<name<<","<<color<<","<<rarity<<")";    
}

ostream &operator<<(ostream &left, card &right)
{
    right.print(left);
    return left; 
}





creature::creature(string in_name, string in_color, string in_rarity, int in_attack, int in_defense, string in_kind):
  card(in_name, in_color, in_rarity)
{
    attack = in_attack;
    defense = in_defense; 
    kind = in_kind; 
}

void creature::print(ostream &left)
{
    left<<"("<<name<<","<<color<<","<<rarity<<",";
    left<<attack<<","<<defense<<","<<kind<<")";
}

ostream &operator<<(ostream &left, creature &right)
{
    right.print(left);
    return left; 
}



land::land(string in_name, string in_color, string in_rarity, int in_mana, string in_descr, bool in_tap):
  card(in_name, in_color, in_rarity)
{
    mana = in_mana; 
    descr = in_descr; 
    tap = in_tap; 
}

void land::print(ostream &left)
{
    left<<"("<<name<<","<<color<<","<<rarity<<",";
    left<<mana<<","<<descr<<",";
    if (tap)
        left<<"tapped";
    else
        left<<"untapped";
    
    left<<")";
}

ostream &operator<<(ostream &left, land &right)
{
    right.print(left);    
    return left; 
}



pool::pool()
{
    cards[0]=new creature("Akroan Crusader", "red", "common",1,1,"Human Soldier");
    cards[1]=new creature("Rune-Scarred Demon", "black", "rare",6,6,"Demon");
    cards[2]=new land("Plains", "white", "uncommon", 1, "Basic Land - Plains", false);
    cards[3]=new land("Swamp", "black", "uncommon", 1, "Basic Land - Swamp", false);
    cards[4]=new creature("Aegis Angel", "white", "rare",5,5,"Angel");
    cards[5]=new creature("Angler Turtle", "blue", "rare",5,7,"Turtle");
    cards[6]=new creature("Harbinger of Life", "black", "common",2,3,"Summon Spirit");
    cards[7]=new creature("Ghalta, Primal Hunger", "green", "rare",12,12,"Elder Dinosaur");
    cards[8]=new creature("Skarrgan Hellkite", "red", "rare",4,4,"Dragon");
    cards[9]=new creature("Spawn of Mayhem", "black", "rare",4,4,"Demon");
    
    n_cards=10; 
}

pool::~pool()
{
    int i;
    
    for (i=0; i<n_cards; i++)
        delete cards[i];
}

card *pool::pick_random_card()
{
    return cards[rand()%n_cards];
}




hand::hand(pool &p)
{
    fill_hand(p);
}

void hand::pick_card(pool &p, int i)
{
    cards[i]=p.pick_random_card(); 
}

void hand::fill_hand(pool &p)
{
    int i; 
    
    for (i=0; i<7; i++)
        pick_card(p, i);
    
    n_cards = 7; 
}

ostream &operator<<(ostream &left, hand &right)
{
    for (int i=0; i<right.n_cards; i++)
        left<<*right.cards[i]<<endl;
    
    return left; 
}