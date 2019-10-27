#include <cstring>
#include "STRING.h"

STRING::STRING()
{
    length = 0;
    str = new char[1];
    str[0]='\0';
}

STRING::STRING(char *in_str)
{
    length = strlen(in_str);
    
    str = new char [length+1];
    if (!str) cout<<"Error Allocating Memory";
    
    strcpy(str, in_str);
}

STRING::STRING(const char *in_str)
{
    length = strlen(in_str);
    
    str = new char [length+1];
    if (!str) cout<<"Error Allocating Memory";
    
    strcpy(str, in_str);
}

STRING::STRING(const STRING &ob)
{
    length = ob.get_length(); 
    
    str = new char [length+1];
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

STRING &STRING::operator=(STRING &right)
{
    if (this==&right) return *this; 
    
    length=right.length; 
    
    delete [] str;
    str = new char [length+1];
    if (!str) cout<<"Error Allocating Memory";
    
    strcpy(str, right.str);
    
    return *this; 
}

char &STRING::operator[](int i)
{
    if (i>=0 && i<=length)
        return str[i];
    else
        cout<<"Index out of bounds!";
}

bool STRING::operator<(STRING &right)
{
    if (strcmp(str, right.str)<0)
        return true;
    return false; 
}

bool STRING::operator>(STRING &right)
{
    if (strcmp(str, right.str)>0)
        return true;
    return false; 
}

bool STRING::operator==(STRING &right)
{
    if (strcmp(str, right.str)==0)
        return true;
    return false; 
}

ostream &operator<<(ostream &left, const STRING &ob)
{
    left<<ob.str;
    
    return left; 
}

istream &operator>>(istream &left, STRING &ob)
{
    char in_str[80];
    
    left>>in_str; 
    
    if (ob.str!=NULL)
        delete [] ob.str;
        
    ob.str = new char [strlen(in_str)+1];
    if (ob.str==NULL)
        cout<<"Error allocating memory";
        
    ob.length=strlen(in_str);
    strcpy(ob.str,in_str); 
    
    return left; 
}




