#include <iostream>
using namespace std; 

class man 
{
   public:
      friend class god;
      man(int in_sins);
      int get_sins() const;
   private:
      int sins; 
};

class god
{
   public:
      void forgive(man &ob);
};

int main()
{
    man Euthypro(100);
    god Apollo;
    
    cout<<"Sins="<<Euthypro.get_sins()<<endl;    
    Apollo.forgive(Euthypro);
    cout<<"Sins="<<Euthypro.get_sins();
    
    return 0; 
}


man::man(int in_sins)
{
    sins = in_sins; 
}

int man::get_sins() const
{
    return sins;
}

void god::forgive(man &ob)
{
    ob.sins = 0; 
}
