/* CPP2.private.cpp Ιδιωτικά Μέλη της κλάσης */

#include <iostream>
using namespace std;

class cow 
{  
  public:
    int weight;
    void express () 
    {
      if (hunger>10)
        cout<<"MmmmmmmmMMMmmM";
    }
    int set_hunger (int h)
    {
      hunger = h; 
    }
  private:    
    int hunger;
};


int main() 
{
  cow Molly;
  Molly.weight = 500;
  Molly.set_hunger(49);
  Molly.express();
}
