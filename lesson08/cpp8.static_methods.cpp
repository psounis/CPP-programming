/* cpp8.static_methods.cpp */ 

#include <iostream>
using namespace std;

class orc {
  public:
    static int alive_orcs;
    static bool frenzy_mode; 
    static void toggle_frenzy_mode(); 
    orc(); 
    ~orc(); 
    friend ostream &operator<<(ostream &left, const orc &right);
  private:
    int h; 
};

int orc::alive_orcs = 0; 
bool orc::frenzy_mode = false; 

int main()
{
    orc orc1,orc2; 
    
    cout<<"NORMAL MODE"<<endl; 
    cout<<"Orc1: "<<orc1<<endl; 
    cout<<"Orc2: "<<orc2<<endl; 
    
    orc::toggle_frenzy_mode();
    cout<<"FRENZY MODE"<<endl; 
    cout<<"Orc1: "<<orc1<<endl; 
    cout<<"Orc2: "<<orc2<<endl; 

    return 0; 
}

orc::orc()
{
    alive_orcs++; 
}

orc::~orc()
{
    alive_orcs--; 
}

void orc::toggle_frenzy_mode()
{
    if (frenzy_mode)
        frenzy_mode=false;
    else
        frenzy_mode=true; 
}

ostream &operator<<(ostream &left, const orc &right)
{
    if (orc::frenzy_mode)
        cout<<"AARFFGHHRHHHHR";
    else
        cout<<"ougba";
}