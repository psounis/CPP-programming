/* CPP2.class.cpp Σχεδιασμός μιας κλάσης ανάλογα με τις προδιαγραφές */

#include <iostream>
using namespace std;

class dog 
{  
  public:
    void init(int in_mood)    
    {      
      mood=in_mood;    
    }    
    void bark()    
    {      
      cout<<"woof!"<<endl;    
    }
    void report_mood()    
    {      
      if (mood>10)        
        cout<<"I am cool";      
      else        
        cout<<"I am furious";    
    }  
  private:    
    int mood;
};


int main() 
{
    dog piko;
    
    piko.init(6);
    
    cout<<"Piko, how are you today?"<<endl;
    piko.report_mood();
    cout<<endl;
    cout<<"Piko, please bark twice for me"<<endl;
    piko.bark();
    piko.bark();
}
