/* CPP2.class_functions.cpp Ορισμός των μεθόδων έξω από τις κλάσεις */

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
  dog piko;
    
  piko.init(6);
    
  cout<<"Piko, how are you today?"<<endl;
  piko.report_mood();
  cout<<endl;
  cout<<"Piko, please bark twice for me"<<endl;
  piko.bark();
  piko.bark();
}

void dog::init(int in_mood)    
{      
  mood=in_mood;    
}    
void dog::bark()    
{      
  cout<<"woof!"<<endl;    
}
void dog::report_mood()    
{      
  if (mood>10)        
    cout<<"I am cool";      
  else        
    cout<<"I have my nerves";    
}  
