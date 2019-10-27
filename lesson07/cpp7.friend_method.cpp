/* cpp7.friend_method.cpp Φιλική μέθοδος σε κλάση */ 

#include <iostream>
using namespace std; 

class man; //forward declaration

class state
{
   public:
      void withdraw(man &ob);
};

class man 
{
   public:
      friend void state::withdraw(man &ob);
      man(int in_money);
      int get_money() const;
   private:
      int money; 
};

int main()
{
    man Papadakis(1500);
    state Greece;
    
    cout<<"Papadakis' Money="
         <<Papadakis.get_money()
         <<endl;    

    Greece.withdraw(Papadakis);

    cout<<"Papadakis' Money="
         <<Papadakis.get_money();
    
    return 0; 
}

void state::withdraw(man &ob)
{
  ob.money=0;
}

man::man(int in_money)
{
  money = in_money; 
}

int man::get_money() const
{
  return money; 
}
