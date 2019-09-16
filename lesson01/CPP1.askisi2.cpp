#include <iostream>
using namespace std;

double average (int a, int b);
double average (double a, double b);

int main()
{
    int int_a, int_b;
    double double_a, double_b;
    int in;
    
    cout<<"1-akeraioi, 2-pragmatikoi: ";
    cin>>in;
    
    if (in==1)
    {
        cout<<"Dwse 1o akeraio: ";
        cin>>int_a;
        cout<<"Dwse 2o akeraio: ";
        cin>>int_b;
        cout<<"Mesos oros: "<<average(int_a, int_b);
    }
    else if (in==2)
    {
        cout<<"Dwse 1o pragmatiko: ";
        cin>>double_a;
        cout<<"Dwse 2o pragmatiko: ";
        cin>>double_b;
        cout<<"Mesos oros: "<<average(double_a, double_b);
        
    }
    else
    {
        cout<<"Kopane!";
    }
    
    return 0;
}


double average (int a, int b)
{
    return (a+b)/2.0;
}


double average (double a, double b)
{
    return (a+b)/2;
}

