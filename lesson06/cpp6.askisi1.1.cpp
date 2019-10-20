/* cpp6.askisi1.1.cpp */

#include <iostream>
#include <cstring>
using namespace std;

class STRING {
    public:
        STRING();
        STRING(char *in_str);
        STRING(const STRING &ob);
        ~STRING();
        int get_length() const; 
        char *get_str() const; 
        void set_str(char *in_str);
        void print(); 
        STRING &operator=(STRING &right);
    private:
       int length;
       char *str; 
};


int main()
{
    char s[80]="This is a string";
    STRING s1(s);
    STRING s2; 
    
    s2=s1;

    s1.print(); 
    cout<<endl; 
    s2.print();
    
    return 0; 
}

STRING::STRING()
{
    length = 0;
    str = NULL; 
}

STRING::STRING(char *in_str)
{
    length = strlen(in_str);
    
    str = new char [length];
    if (!str) cout<<"Error Allocating Memory";
    
    strcpy(str, in_str);
}

STRING::STRING(const STRING &ob)
{
    length = ob.get_length(); 
    
    str = new char [length];
    if (!str) cout<<"Error Allocating Memory";
    
    strcpy(str, ob.get_str());    
}

STRING::~STRING()
{
    delete [] str; 
}

int STRING::get_length() const
{
    return length; 
}

char *STRING::get_str() const
{
    return str; 
}

void STRING::set_str(char *in_str)
{
    if (str!=NULL)
        delete str; 
    
    length = strlen(in_str);
    
    str = new char [length];
    if (!str) cout<<"Error Allocating Memory";
    
    strcpy(str, in_str);    
}

void STRING::print()
{
    cout<<str; 
}

STRING &STRING::operator=(STRING &right)
{
    if (this==&right) return *this; 
    
    length=right.length; 
    
    delete [] str;
    str = new char [length];
    if (!str) cout<<"Error Allocating Memory";
    
    strcpy(str, right.str);
    
    return *this; 
}

