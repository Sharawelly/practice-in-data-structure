

#define ll long long
using namespace std;
#include <iostream>

template<typename T>
class Node{
public:
    T data;
    Node *Next;
    Node(){

    }
};
template<typename T>
class Stack_based_Nodes{// last_in first_out
public:
   Node<T> *Top ;
   ll size;
   Stack_based_Nodes(){
       Top=NULL;
       size=0;

   }

   ll Size(){
       return size;
   };
   bool is_empty(){
       return (Top==NULL);
   };
   void push(T element){
       Node<T>*newnode=new Node<T>();
       Node<T>*temp=Top;
       newnode->data=element;
       if(is_empty()){
           Top=newnode;
           Top->Next=NULL;
           size++;
           return;
       }
       Top=newnode;
       Top->Next=temp;
       size++;

   };
    T pop() {
        if (!is_empty()) {
            Node<T>* delptr = Top;
            T popped_value = delptr->data;
            Top = Top->Next;
            size--;
            delete delptr;
            return popped_value;
        }
        // Return a default value if stack is empty
        // This could be improved by throwing an exception instead.
        return T();
    };


    void print(){
       if(is_empty()){
           cout<<"stack is empty\n";
           return;
       }
       Node<T>*temp=Top;
       while( temp->Next !=NULL){
           cout<<temp->data<<" ";
           temp= temp->Next;
       }
       cout<<'\n';
   };
   void clear(){
       Node<T>*temp=Top;
       Node<T>*delptr=NULL;
       if(!is_empty()){
           while(temp != NULL){
               delptr=temp;
               temp= temp->Next;
               delete delptr;
           }
           size=0;
           Top=NULL;
       }


   };
   T peek (){
       Node<T>*temp=Top;
       if(!is_empty()){
           return temp->data;
       }
   }

};










int main() {
    Stack_based_Nodes<ll> stack1;
    cout<<stack1.is_empty()<<'\n';
    cout<<stack1.Size()<<'\n';

    stack1.push(1);
    cout<<stack1.peek()<<'\n';

    cout<<stack1.is_empty()<<'\n';
    cout<<stack1.Size()<<'\n';

    stack1.push(2);
    stack1.push(3);
    stack1.push(4);
    stack1.push(5);
    stack1.push(6);
    stack1.push(7);
    stack1.push(8);
    cout<<stack1.Size()<<'\n';
    cout<<stack1.peek()<<'\n';

    stack1.print();
    cout<<stack1.pop()<<'\n';
    cout<<stack1.peek()<<'\n';

    stack1.print();
    stack1.clear();
    stack1.print();
    cout<<stack1.is_empty()<<'\n';
    cout<<stack1.Size()<<'\n';

}