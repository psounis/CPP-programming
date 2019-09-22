/* CPP2.public.cpp Δημόσια Μέλη της κλάσης */

#include <iostream>
using namespace std;

class cow 
{  
  public:
    int weight;
  private:    
    int hunger;
};


int main() 
{
  cow molly;
  molly.weight = 500;
  // Molly.hunger = 10; // Δεν επιτρέπεται. Είναι ιδιωτική μεταβλητή
}
