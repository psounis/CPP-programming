/* cpp7.friend_class_linked_list.cpp: Φιλικές Κλάσεις */
#include <iostream>
using namespace std; 

class node
{
   public: 
      friend class linked_list; 
   private:
      int data; 		 
      node *next;     
};

class linked_list
{
   public: 
      linked_list();
      bool insert_start(int in_data);
      void print();
   private:
      node *head;     
};


int main()
{
    linked_list list;
    
    list.insert_start(5);
    list.insert_start(4);
    list.insert_start(3);
    list.print();
    
    return 0; 
}

linked_list::linked_list()
{
    head = NULL; 
}

bool linked_list::insert_start(int x)
{
   node *newnode;
	
   newnode = new node;
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

void linked_list::print()
{
   node *current;
	
   current=head;
   while(current!=NULL)
   {
      cout<<current->data<<" ";
      current=current->next;
   }
}
