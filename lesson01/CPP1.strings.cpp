/* CPP1.strings.cpp  */

#include <iostream>
#include <cstring>
using namespace std;

int main()
{    
   char str1[80];
   char str2[80];
   
   cout<<"Dwse string: ";
   cin>>str1;
   strcpy(str2,str1);
   cout<<str2;
   
   return 0;
}

