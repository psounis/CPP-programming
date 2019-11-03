/* cpp8.string_capacity.cpp */ 

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1;
    string s2("Medium");
    string s3("A rather large one");
    
    cout<<"Capacity s1: "<<s1.capacity()<<endl;
    cout<<"Length s1:"<<s1.size()<<endl; 
    
    cout<<"Capacity s2: "<<s2.capacity()<<endl;
    cout<<"Length s2:"<<s2.length()<<endl; 
    
    cout<<"Capacity s3: "<<s3.capacity()<<endl;
    cout<<"Length s3:"<<s3.length()<<endl; 
    
    s3+=s1+s2; 

    cout<<"Capacity s3: "<<s3.capacity()<<endl;
    cout<<"Length s3:"<<s3.length()<<endl; 
    
    s3.resize(10);

    cout<<"Capacity s3: "<<s3.capacity()<<endl;
    cout<<"Length s3:"<<s3.length()<<endl; 

    s3.shrink_to_fit();

    cout<<"Capacity s3: "<<s3.capacity()<<endl;
    cout<<"Length s3:"<<s3.length()<<endl; 
    
    return 0; 
}
