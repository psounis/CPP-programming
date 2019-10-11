/* cpp5.askisi1.cpp */

#include <iostream>
using namespace std; 

#define N 3

class tictactoe {
  public:
    tictactoe();
    bool play(int x, int y, char c);
    char check_winner();
    void print(); 
  private:
    char array[N][N];
};


int main()
{
    tictactoe t; 
    char player = 'X';
    int x,y, step=0;
    
    while(true)
    {
        cout<<"PLAISIO: "<<endl;
        t.print();  
        cout<<"Paizei o "<<player<<endl; 
        
        cout<<"Dwse X sintetagmeni: ";
        cin>>x;
        cout<<"Dwse Y sintetagmeni: ";
        cin>>y;
        
        if (!t.play(x,y,player))
        {
            cout<<"Lathos Kinisi!";
            continue;
        }
        else
            step++; 
        
        if (t.check_winner()!='-')
        {
            t.print(); 
            cout<<"Nikise o "<<t.check_winner();
            break;
        }
        else if (step==9)
        {
            t.print(); 
            cout<<"Isopalia";
            break;
        }
        

        if (player=='X')
            player='O';
        else
            player='X';
    }
    

    return 0;
}

tictactoe::tictactoe()
{
    int i,j;
    
    for (i=0; i<N; i++)
        for (j=0; j<N; j++)
            array[i][j]='-';
}

bool tictactoe::play(int x, int y, char c)
{
    if (array[x][y]=='-')
    {
        if (c=='X'||c=='O')
        {
            array[x][y]=c;
            return true; 
        }
        else
            return false;
    }
    else 
        return false; 
}

char tictactoe::check_winner()
{
    int i,j; 
    
    /* grammes */
    for (i=0; i<N; i++)
    {
        if (array[i][0]==array[i][1] && array[i][1]==array[i][2])
            return array[i][0];
    }
    
    /* stiles */
    for (j=0; j<N; j++)
    {
        if (array[0][j]==array[1][j] && array[1][j]==array[2][j])
            return array[0][j];
    }
    
    /* diagwnioi */
    
    if (array[0][0]==array[1][1] && array[1][1]==array[2][2])
        return array[0][0];
        
    if (array[0][2]==array[1][1] && array[1][1]==array[2][0])
        return array[0][2];
        
    return '-';
}

void tictactoe::print()
{
    int i,j; 
    for (i=0; i<N; i++)
    {
        for (j=0; j<N; j++)
            cout<<array[i][j];
        cout<<endl;
    }
}