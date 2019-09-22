#include <iostream>
#include <cstring>
using namespace std;

class wizard {
    public:
        wizard(int in_age, char *in_beard, int in_mana);
        void fireball();
        void lightning();
        void wait();
    private:
        int age;
        char beard[80];
        int mana;
};




int main()
{
    char str[80]="grey";
    wizard gandalf(2019, str, 100);
    
    gandalf.fireball();
    gandalf.wait();
    gandalf.lightning();
    gandalf.wait();
    gandalf.wait();
    gandalf.fireball();
    
}




wizard::wizard(int in_age, char *in_beard, int in_mana)
{
    age = in_age;
    strcpy(beard, in_beard);
    mana = in_mana;
}

void wizard::fireball()
{
    if (mana >= 30)
    {
        mana-=30; 
        cout<<endl<<"Fireball! (mana:"<<mana<<")";
    }
    else
        cout<<endl<<"Fireball effort (not enough mana)";
}

void wizard::lightning()
{
    if (mana>=90)
    {
        mana-=90; 
        cout<<endl<<"Lighting! (mana:"<<mana<<")";
    }
    else
        cout<<endl<<"Lightning effort (not enough mana)";
        
}

void wizard::wait()
{
    if (mana<=90)
        mana+=10; 
    cout<<endl<<"wait... (mana:"<<mana<<")";
}