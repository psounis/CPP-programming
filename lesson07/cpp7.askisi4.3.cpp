/* cpp7.askisi4.3.cpp */ 

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
        void insert_point(point ob);
        void clear(); 
        ~board(); 
        board &operator=(const board &ob);
        friend ostream &operator<<(ostream &left, const board &right);
    private:
        int N; 
        char **p;
};





int main()
{
    int choice; 
    int temp_int;
    point temp_point(0,0);
    board b(30);
    
    
    while(true)
    {
        cout<<"MENU"<<endl;
        cout<<"1-Eisagogi simeiou"<<endl;
        cout<<"2-Ektypwsi plaisiou"<<endl;
        cout<<"3-Katharismos plaisiou"<<endl;
        cout<<"4-eksodos"<<endl;
        cout<<"Epilogi? "; 
        cin>>choice; 
        
        switch(choice)
        {
            case 1: 
                cout<<"Dwse x syntetagmeni: ";
                cin>>temp_int;
                temp_point.set_x(temp_int);
                cout<<"Dwse y syntetagmeni: ";
                cin>>temp_int;
                temp_point.set_y(temp_int);
                b.insert_point(temp_point);
                
                break;
            case 2:
            
                cout<<endl<<b;
                
                break;
            case 3:
            
                b.clear();
                cout<<"To plaisio katharistike!";
                
                break;
            case 4:
                cout<<"Bye bye!!";
                exit(0);
            default: 
                cout<<"Lathos Eisodos...";
        }
    }


    
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

void board::insert_point(point ob)
{
    if (ob.get_x()>=0 && ob.get_x()<N && ob.get_y()>=0 && ob.get_y()<N)
        p[ob.get_x()][ob.get_y()]='O';
}

void board::clear()
{
    int i,j;
    
    for (i=0; i<N; i++)
        for (j=0; j<N; j++)
            p[i][j]='.';
}
