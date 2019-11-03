/* cpp9.askisi1.cpp */

#include <iostream>
#include <string>
using namespace std;

#define SIZE 10

void insertion_sort(string *pinakas, int N);
void swap(string &s1, string &s2);

int main()
{
    string pin[SIZE]={"abcd","adas","asdr","aqwe","qwetyy","asdasd","asdasdq","xcvxc","ytreh","werwer"};
    
    insertion_sort(pin,SIZE);
    
    for (int i=0; i<SIZE; i++)
    {
        cout<<pin[i]<<endl; 
    }
    
    return 0; 
}

/* Taksinomisi me Eisagogi */

void insertion_sort(string *pinakas, int N)
{
    int i,j; 
    
    for (i=1; i<N; i++)
    {
       for (j=i; j>=1; j--)
       {
          if (pinakas[j]<pinakas[j-1])
             swap(pinakas[j], pinakas[j-1]);
          else
             break;
       }
    }
}

void swap(string &s1, string &s2)
{
    string k = s1; 
    s1=s2;
    s2=k; 
}