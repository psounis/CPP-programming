/* cpp8.lifespan.cpp */ 
#include <iostream>
using namespace std; 

class life {
public: 
	int x; 
	life(int in_x);
	~life(); 
};

int main()
{
	static life ob1(1);
	cout<<"Start Main"<<endl; 
	{
		life ob2(2);
	}

	life *ob3 = new life(3);
	delete ob3; 
	cout<<"End Main"<<endl; 

	return 0;
}

life::life(int in_x)
{
	x = in_x; 
	cout<<"Constructing "<<x<<endl; 
}

life::~life()
{
	cout<<"Destructing "<<x<<endl;
}