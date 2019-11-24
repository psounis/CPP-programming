/* cpp13.askisi2.cpp */
#include <iostream>
using namespace std; 

template <typename T>
class linked_list;

template <typename T>
class node
{
   public: 
      friend class linked_list<T>; 
   private:
      T data; 		 
      node<T> *next;     
};

template <typename T>
class linked_list
{
   public: 
      linked_list();
      ~linked_list();
      bool empty();
      T data(node<T> *p);
      bool insert_start(T in_data);
      bool insert_after(node<T> *p, T x);
      bool delete_start(T *x);
      bool delete_after(node<T> *prev, T *x);
      void print();
   private:
      node<T> *head;     
};


int main()
{
    linked_list<string> list;
    string temp; 
    
    list.insert_start("5.1");
    list.insert_start("4.2");
    list.insert_start("3.3");
    list.delete_start(&temp);
    list.print();

    cout<<endl<<endl<<temp;
    
    return 0; 
}

template <typename T>
linked_list<T>::linked_list()
{
    head = NULL; 
}

template <typename T>
linked_list<T>::~linked_list()
{
	node<T> *ptr;
	
	while (head!=NULL)
	{
		ptr=head;
		head=head->next;
		delete ptr;
	}
}


template <typename T>
bool linked_list<T>::empty()
{
    return head == NULL;
}

template <typename T>
T linked_list<T>::data(node<T> *p)
{
	return p->data;
}

template <typename T>
bool linked_list<T>::insert_start(T x)
{
   node<T> *newnode;
	
   newnode = new node<T>;
   if (!newnode)
   {
      cout<<"Error allocating memory";
      return false;
   }
   newnode->data=x;

   newnode->next=head;
   head=newnode;
   return true;
}

template <typename T>
bool linked_list<T>::insert_after(node<T> *p, T x)
{
	node<T> *newnode;
	
	newnode=new node<T>;
	if (!newnode)
	{
		cout<<"Adynamia desmeusis mnimis";
		return false;
	}
	newnode->data=x;
	
	newnode->next=p->next;
	p->next=newnode;
	return true;
}

template <typename T>
bool linked_list<T>::delete_start(T *x)
{
	node<T> *current;
	
	if (head==NULL)
		return false;
		
	current=head;
	*x=current->data;
	
	head=head->next;
	delete current;
	
	return true;
}

template <typename T>
bool linked_list<T>::delete_after(node<T> *prev, T *x)
{
	node<T> *current;
	
	if (prev->next==NULL)
		return false;
		
	current=prev->next;
	*x=current->data;
	
	prev->next=current->next;
	delete current;
	return true;
}




template <typename T>
void linked_list<T>::print()
{
   node<T> *current;
	
   current=head;
   while(current!=NULL)
   {
      cout<<current->data<<" ";
      current=current->next;
   }
}