/* cpp7.askisi4.2.cpp */ 

#include <iostream>
#include <cstdlib>
using namespace std;

class point
{
   public:
     point(int in_x, int in_y);
     int get_x() const; 
     int get_y() const; 
     void set_x(int in_x);
     void set_y(int in_y);
     friend ostream &operator<<(ostream &left, const point &right);
   private:
     int x; 
     int y; 
};




class board
{
    public:
        board(int in_N);
        board(const board &ob);
        char get_elem(int i, int j);
        ~board(); 
        board &operator=(const board &ob);
        friend ostream &operator<<(ostream &left, const board &right);
    private:
        int N; 
        char **p;
};





int main()
{
    point p(63,65);
    board b(40);

    
    cout<<b; 
    
    
    return 0; 
}






point::point(int in_x, int in_y)
{
    if (in_x>=0 && in_x<60)
        x = in_x; 
    else
    {
        cout<<"Lathos stin x-syntetagmeni. ";
        x = 0; 
    }
    
    if (in_y>=0 && in_y<60)
        y = in_y; 
    else
    {
        cout<<"Lathos stin y-syntetagmeni. ";
        y = 0; 
    }
}

int point::get_x() const
{
    return x; 
}

int point::get_y() const
{
    return y;
}
void point::set_x(int in_x)
{
    x = in_x; 
}

void point::set_y(int in_y)
{
    y = in_y;
}

ostream &operator<<(ostream &left, const point &right)
{
    cout<<"("<<right.x<<","<<right.y<<")";
    
    return left; 
}

board::board(int in_N)
{
    int i,j; 
    
    N = in_N; 
    
    p = new char *[N];
    if (!p)
    {
        cout<<"Error Allocating Memory";
        exit(0);
    }
    
    for (i=0; i<N; i++)
    {
        p[i]=new char [N];
        if (!p[i])
        {
            cout<<"Error Allocating Memory";
            exit(0);
        }
    }
    
    for (i=0; i<N; i++)
        for (j=0; j<N; j++)
            p[i][j]='.';
        
}

board::~board()
{
    int i; 
    
    for (i=0; i<N; i++)
        delete [] p[i];
    delete p; 
}

board::board(const board &ob)
{
    int i,j; 
    
    N=ob.N; 

    p = new char *[N];
    if (!p)
    {
        cout<<"Error Allocating Memory";
        exit(0);
    }
    
    for (i=0; i<N; i++)
    {
        p[i]=new char [N];
        if (!p[i])
        {
            cout<<"Error Allocating Memory";
            exit(0);
        }
    }
    
    for (i=0; i<N; i++)
        for (j=0; j<N; j++)
            p[i][j]=ob.p[i][j];
}

board &board::operator=(const board &ob)
{
    int i,j; 
    if (p!=NULL)
    {
        for (i=0; i<N; i++)
            delete [] p[i];
        delete p;    
    }

    N=ob.N; 

    p = new char *[N];
    if (!p)
    {
        cout<<"Error Allocating Memory";
        exit(0);
    }
    
    for (i=0; i<N; i++)
    {
        p[i]=new char [N];
        if (!p[i])
        {
            cout<<"Error Allocating Memory";
            exit(0);
        }
    }    
    
    for (i=0; i<N; i++)
        for (j=0; j<N; j++)
            p[i][j]=ob.p[i][j];
}

char board::get_elem(int i, int j)
{
    return p[i][j];
}

ostream &operator<<(ostream &left, const board &right)
{
    int i,j; 

    for (i=right.N-1; i>=0; i--)
    {
        for (j=0; j<right.N; j++)
            left<<right.p[i][j]<<" ";
        left<<endl;
    }
    
    return left;
}




