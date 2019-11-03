/* cpp9.askisi2.cpp */ 

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define N 10

int main()
{
    string words[N]={"bond", "neo", "boromir", "saruman", "gandalf", "sansha", "stark", "spiderman", "frodo", "morpheus"};
    
    /* Choose random words */
    
    srand(time(0));
    
    string hidden = words[rand()%10];

    /* Arxikopoiisi game */
    
    string game(hidden.length(), '-');
    
    /* Guesses */
    
    string bad_guesses; 
    string right_guesses; 
    
    /* MAX */
    
    int MAX = 10; 
    int wrong_guesses = 0; 
    
    /* algorithm */
    char letter; 
    
    while (true)
    {
        cout<<game<<endl;
        cout<<"Choose letter: ";
        cin>>letter; 
        
        if (bad_guesses.find(letter)!=bad_guesses.npos)
        {
            cout<<"To gramma exei epilexthei"<<endl;
            continue; 
        }
        
        if (right_guesses.find(letter)!=right_guesses.npos)
        {
            cout<<"To gramma exei epilexthei"<<endl;
            continue; 
        }
        
        if (hidden.find(letter)!=hidden.npos) // yparxei
        {
            int pos; 
            
            cout<<"Swsti epilogi!"<<endl; 
            
            pos = hidden.find(letter);
            
            while (pos<hidden.length())
            {
                game[pos]=hidden[pos];    
                pos = hidden.find(letter, pos+1);
            }
            
            right_guesses.push_back(letter);
            
            if (game.find('-')==hidden.npos)
            {
                cout<<"Kerdises!!!!!"<<endl;
                cout<<"H leksh itan: "<<game;
                break; 
            }
        }
        else //den yparxei
        {
            cout<<"To gramma den yparxei"<<endl; 
            wrong_guesses ++; 
            cout<<"Apomenoun "<<MAX-wrong_guesses<<" prospatheies"<<endl;
            bad_guesses.push_back(letter);
            
            if (wrong_guesses==MAX)
            {
                cout<<"Exases!";
                cout<<"H leksi itan: "<<hidden;
                break; 
            }
        }
    }
}