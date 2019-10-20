/* cpp6.askisi3.cpp */

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class wizard {
    public:
        wizard(int in_age, char *in_beard, int in_mana, int in_health);
        int get_health() const; 
        int fireball();
        int lightning();
        void wait();
        bool check_dead(); 
        wizard &operator+=(int add_health);
        wizard &operator-=(int sub_health);
    private:
        int age;
        char beard[80];
        int mana;
        int health; 
};

class humanoid {
    public:
        humanoid();
        int get_health() const; 
        int attack();
        bool check_dead(); 
        humanoid &operator-=(int sub_health);
    private:
        int health; 
};


int main()
{
    char str[80]="grey";
    wizard gandalf(2019, str, 100, 100);
    int damage; 
    humanoid h; 
    int r;

    /* Arxikopoiisi pragmatwn */
    srand(time(0));
    
    
    /* Senario paixnidiou */ 
    
    r=1; 
    while(1)
    {
        cout<<endl<<"=======================";
        cout<<endl<<"Round "<<r<<endl;
        
        
        /* Paizei o magos */
        if (rand()%2==0) //lightning
        {
            damage=gandalf.lightning();
            h-=damage; 
        }
        else //Fireball
        {
            damage=gandalf.fireball();
            h-=damage; 
        }
        
        /* Elegxos an to humanoid pethane */
        if (h.check_dead())
        {
            cout<<"To humanoid psofise!";
            break; 
        }
        
        /* Paizei to anthrwpoeides */
        
        damage=h.attack();
        gandalf-=damage; 
        
        /* Elegxos an o wizard pethane */
        if (gandalf.check_dead())
        {
            cout<<"O wizard psofise!";
            break; 
        }
        
        /* Ektypwsi igeias */
        cout<<endl<<"Wizard(health): "<<gandalf.get_health(); 
        cout<<endl<<"Humanoid(health): "<<h.get_health();
        
        
        
        /* Auksisi twn girwn */
        gandalf.wait(); 
        r++;
    }
    
}




wizard::wizard(int in_age, char *in_beard, int in_mana, int in_health)
{
    age = in_age;
    strcpy(beard, in_beard);
    mana = in_mana;
    health = in_health; 
}

int wizard::get_health() const
{
    return health; 
}

int wizard::fireball()
{
    if (mana >= 90)
    {
        mana-=90; 
        cout<<endl<<"Fireball! (mana:"<<mana<<")";
        return 50+rand()%21; 
    }
    else
    {
        cout<<endl<<"Fireball effort (not enough mana)";
        return 0; 
    }
        
}

int wizard::lightning()
{
    if (mana>=30)
    {
        mana-=30; 
        cout<<endl<<"Lightning! (mana:"<<mana<<")";
        return 10+rand()%21; 
    }
    else
    {
        cout<<endl<<"Lightning effort (not enough mana)";
        return 0; 
    }
}

void wizard::wait()
{
    if (mana<=90)
        mana+=10; 
    cout<<endl<<"wait... (mana:"<<mana<<")";
}

bool wizard::check_dead()
{
    if (health<=0)
        return true; 
    return false; 
}

wizard &wizard::operator+=(int add_health)
{
    health+=add_health; 
    
    if (health>100)
        health=100; 
    
    return *this; 
}

wizard &wizard::operator-=(int sub_health)
{
    health-=sub_health; 
    
    if (health<=0)
        cout<<"Wizard dead!";
        
}





humanoid::humanoid()
{
    health=100; 
}

int humanoid::get_health() const
{
    return health;
}

humanoid &humanoid::operator-=(int sub_health)
{
    health-=sub_health; 
    
    if (health<=0)
        cout<<"Humanoid dead!";
}

int humanoid::attack()
{
    return 1+rand()%5; 
}

bool humanoid::check_dead()
{
    if (health<=0)
        return true; 
    return false; 
}

