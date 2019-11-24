/* cpp13.template_with_friend.cpp Template stack */

#include <iostream>
#include <string>
using namespace std;

#define STACK_SIZE 100


template <typename T>
class stack {
  public:
    stack(); 
    bool empty();
    bool full(); 
    bool push(T elem);
    bool pop(T *elem);
    template <typename U>friend ostream &operator<<(ostream &left, const stack<U> &right);
  private:
    T array[STACK_SIZE];
    int top; 
};

int main()
{
    /* integer stack */
    stack<int> st;
    int temp; 
    
    st.push(1);
    cout<<st<<endl; 
    st.push(2);
    cout<<st<<endl; 
    st.pop(&temp);
    cout<<st<<endl; 
    st.push(3);
    cout<<st<<endl; 
    st.push(4);
    cout<<st<<endl; 

    return 0; 
}


template <typename T>
stack<T>::stack()
{
    top=-1; 
}

template <typename T>
bool stack<T>::empty()
{
    return top==-1; 
}

template <typename T>
bool stack<T>::full()
{
    return top==STACK_SIZE-1; 
}

template <typename T>
bool stack<T>::push(T elem)
{
    if (full())
        return false; 
    
    top++; 
    array[top]=elem; 
    return true; 
}

template <typename T>
bool stack<T>::pop(T *elem)
{
    if (empty())
        return false; 
    
    *elem = array[top]; 
    top--; 
    return true; 
}

template <typename T>
ostream &operator<<(ostream &left, const stack<T> &right)
{
    for (int i=0; i<=right.top; i++)
        left<<right.array[i]<<" ";
    
    return left; 
}
