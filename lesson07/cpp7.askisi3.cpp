/* askisi3.cpp */ 
#include <iostream>
#include "STRING.h"
using namespace std; 

class table; // fwd declaration

class chair {
    public:
        chair(STRING in_color, int in_height);
        friend ostream &operator<<(ostream &left, const chair &right);
        friend void shrink(chair &c, table &t);
    private:
        STRING color; 
        int height; 
};


class table {
    public:
        table(STRING in_color, int in_width, int in_length);
        friend ostream &operator<<(ostream &left, const table &right);
        friend void shrink(chair &c, table &t);
    private:
        STRING color; 
        int width; 
        int length;
};

void shrink(chair &c, table &t)
{
    c.height = 0.9 * c.height;
    t.width = 0.9 * t.width; 
    t.length = 0.9 * t.length; 
}


int main()
{
    chair c("Mple", 150);
    table t("Kokkino", 200, 200); 
    
    cout<<c<<endl<<t; 
    
    shrink(c,t);
    
    cout<<endl<<endl<<"NEES DIASTASEIS: "<<endl;
    cout<<c<<endl<<t;
}

chair::chair(STRING in_color, int in_height)
{
    color = in_color; 
    height = in_height; 
}

ostream &operator<<(ostream &left, const chair &right)
{
    left<<"KAREKLA: xrwma="<<right.color<<", ipsos: "<<right.height;
    
    return left; 
}

table::table(STRING in_color, int in_width, int in_length)
{
    color = in_color; 
    width = in_width;
    length = in_length;
}

ostream &operator<<(ostream &left, const table &right)
{
    left<<"TRAPEZI: xrwma="<<right.color<<", platos: "<<right.width<<", mikos: "<<right.length;
    
    return left; 
}