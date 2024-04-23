//
//#include <iostream>
//#define ll long long
//
//using namespace std;
//
//template<typename T>
//class Node {
//public:
//    T data;
//    Node *next;
//    Node *prev;
//    Node() {
//        next = NULL;
//        prev = NULL;
//    }
//};
//
//template<typename T>
//class double_linkedList {
//public:
//    Node<T>* Head;
//    Node<T>*Last;
//    double_linkedList() {
//        Head = NULL;
//        Last=NULL;
//    }
//    bool isEmpty() {
//        return (Head == NULL);
//    }
//
//    ll size() {
//        ll size = 0;
//        if (isEmpty()) {
//            return size;
//        }
//        Node<T>* temp = Head;
//        while (temp != NULL) {
//            size++;
//            temp = temp->next;
//        }
//        return size;
//    }
//    void append_at_tail(T new_item) {
//        Node<T>* new_node = new Node<T>();
//        new_node->data = new_item;
//        if (isEmpty()) {
//            new_node->next=NULL;
//            new_node->prev=NULL;
//            Head = new_node;
//            Last=new_node;
//            return;
//        }
//
//        Node<T>* temp = Head;
//        while (temp->next != NULL) {
//            temp = temp->next;
//        }
//        temp->next = new_node;
//        new_node->prev = temp;
//        Last=new_node;
//    }
//    void append_at_first(T new_item) {
//        if (isEmpty()) {
//            append_at_tail(new_item);
//            return;
//        }
//        Node<T>* newnode = new Node<T>();
//        newnode->data = new_item;
//        newnode->next = Head;
//        Head->prev = newnode;
//        Head = newnode;
//    }
//    void insert_at_pos(T new_item, ll index) {
//        if (isEmpty()) {
//            append_at_tail(new_item);
//            return;
//        }
//        if (index <= 0) {
//            append_at_first(new_item);
//            return;
//        }
//        if (index >= size()) {
//            append_at_tail(new_item);
//            return;
//        }
//
//        ll cur = 0;
//        Node<T>* temp = Head;
//        Node<T>* newnode = new Node<T>();
//        newnode->data = new_item;
//        while (temp->next != NULL && cur < index) {
//            cur++;
//            temp = temp->next;
//        }
//        newnode->next=temp;
//        newnode->prev=temp->prev;
//        temp->prev->next=newnode;
//        temp->prev=newnode;
//
//    }
//    void print() {
//        if (isEmpty()) {
//            cout << "This list is empty\n";
//            return;
//        }
//        Node<T>* temp = Head;
//        while (temp != NULL) {
//            cout << temp->data << " ";
//            temp = temp->next;
//        }
//        cout << '\n';
//    }
//    void clear(){
//        if(!isEmpty()){
//            Node<T>*temp=Head;
//            Node<T>*delptr=NULL;
//            while(temp != NULL){
//                delptr=temp;
//                temp=temp->next;
//                delete delptr;
//            }
//           Head =NULL;
//            Last=NULL;
//        }
//    }
//    bool is_exist(T item){
//        Node<T>*temp=Head;
//        while(temp!=NULL){
//            if(temp->data ==item){
//                return true;
//            }
//
//            temp=temp->next;
//        }
//        return false;
//
//    }
//    bool is_item_equal(T item ,ll index){
//        ll cur=0;
//        Node<T>*temp=Head;
//        while(temp->next!=NULL && cur<index){
//            temp=temp->next;
//        }
//        if(temp->data== item){
//            return true;
//        }
//        return false;
//    }
//
//    void remove_tail(){
//        Node<T>*temp=Head;
//        Node<T>*delptr=NULL;
//
//        delptr=Last;
//        Last->prev->next=NULL;
//        delete delptr;
//    }
//    void remove_Head(){
//        Node<T>temp=Head;
//
//
//
//    }
//    void remove_at_index(ll index){
//  ll cur=0;
//
//
//    }
//};
//
//int main() {
//    double_linkedList<int> myList;
//    double_linkedList<string>myList_string;
//
//    // Appending elements to the list
//    myList.print();
//    myList.append_at_tail(10);
//    myList.print();
//    myList.append_at_tail(20);
//    myList.append_at_tail(30);
//
//    // Printing the list
//    cout << "List after appending elements: ";
//    myList.print(); // Output: 10 20 30
//
//    // Inserting at specific positions
//    myList.insert_at_pos(15, 1);
//    cout << "List after inserting 15 at position 1: ";
//    myList.print(); // Output: 10 15 20 30
//
//    myList.insert_at_pos(5, 0);
//    cout << "List after inserting 5 at position 0: ";
//    myList.print(); // Output: 5 10 15 20 30
//
//    myList.insert_at_pos(25, 4);
//    cout << "List after inserting 25 at position 4: ";
//    myList.print(); // Output: 5 10 15 20 25 30
//   cout<< myList.size()<<'\n';
//  // myList.clear();
//  //  myList.print();
//  cout<<myList.is_exist(30)<<'\n';
//  cout<<myList.is_exist(5)<<'\n';
//  cout<< myList.is_item_equal(5,0)<<'\n';
//  myList_string.append_at_tail("Habiba");
//    myList_string.append_at_tail("Abdelaziz");
//    myList_string.append_at_tail("baba");
//    myList_string.append_at_tail("mama");
//    myList_string.append_at_tail("rahem");
//    myList_string.append_at_tail("roiaa");
//    myList_string.print();
//    myList.remove_tail();
//    myList.print();
//    myList.remove_tail();
//    myList.remove_tail();
//    myList.remove_tail();
//    myList.print();
//
//
//
//
//}
//
//
//
#include <iostream>
#define ll long long

using namespace std;

template<typename T>
class Node {
public:
    T data;
    Node *next;
    Node *prev;
    Node() {
        next = NULL;
        prev = NULL;
    }
};

template<typename T>
class double_linkedList {
public:
    Node<T>* Head;
    Node<T>* Last;
    double_linkedList() {
        Head = NULL;
        Last = NULL;
    }
    bool isEmpty() {
        return (Head == NULL);
    }

    ll size() {
        ll size = 0;
        if (isEmpty()) {
            return size;
        }
        Node<T>* temp = Head;
        while (temp != NULL) {
            size++;
            temp = temp->next;
        }
        return size;
    }
    void append_at_tail(T new_item) {
        Node<T>* new_node = new Node<T>();
        new_node->data = new_item;
        if (isEmpty()) {
            new_node->next = NULL;
            new_node->prev = NULL;
            Head = new_node;
            Last = new_node;
            return;
        }

        Last->next = new_node;
        new_node->prev = Last;
        Last = new_node;
    }
    void append_at_first(T new_item) {
        if (isEmpty()) {
            append_at_tail(new_item);
            return;
        }
        Node<T>* newnode = new Node<T>();
        newnode->data = new_item;
        newnode->next = Head;
        Head->prev = newnode;
        Head = newnode;
    }
    void insert_at_pos(T new_item, ll index) {
        if (isEmpty()) {
            append_at_tail(new_item);
            return;
        }
        if (index <= 0) {
            append_at_first(new_item);
            return;
        }
        if (index >= size()) {
            append_at_tail(new_item);
            return;
        }

        ll cur = 0;
        Node<T>* temp = Head;
        Node<T>* newnode = new Node<T>();
        newnode->data = new_item;
        while (temp->next != NULL && cur < index) {
            cur++;
            temp = temp->next;
        }
        newnode->next = temp;
        newnode->prev = temp->prev;
        temp->prev->next = newnode;
        temp->prev = newnode;
    }
    void print() {
        if (isEmpty()) {
            cout << "This list is empty\n";
            return;
        }
        Node<T>* temp = Head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << '\n';
    }
    void clear() {
        if (!isEmpty()) {
            Node<T>* temp = Head;
            Node<T>* delptr = NULL;
            while (temp != NULL) {
                delptr = temp;
                temp = temp->next;
                delete delptr;
            }
            Head = NULL;
            Last = NULL;
        }
    }
    bool is_exist(T item) {
        Node<T>* temp = Head;
        while (temp != NULL) {
            if (temp->data == item) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
    bool is_item_equal(T item, ll index) {
        ll cur = 0;
        Node<T>* temp = Head;
        while (temp != NULL && cur < index) {
            temp = temp->next;
            cur++;
        }
        if (temp != NULL && temp->data == item) {
            return true;
        }
        return false;
    }
    void remove_tail() {
        if (isEmpty())
            return;

        Node<T>* delptr = Last;
        if (Last->prev != NULL) {
            Last = Last->prev;
            Last->next = NULL;
        } else {
            Head = NULL;
            Last = NULL;
        }
        delete delptr;
    }

    void remove_Head() {

        if (isEmpty())
            return;
        Node<T>*delptr=Head;
        Head=Head->next;
        Head->prev=NULL;
        delete delptr;
//
//        Node<T>* delptr = Head;
//        Head = Head->next;
//        if (Head != NULL)
//            Head->prev = NULL;
//        delete delptr;
    }

    void remove_at_index(ll index) {
        if (isEmpty())
            return;

        ll cur = 0;
        Node<T>* temp = Head;
        while (temp != NULL && cur < index) {
            temp = temp->next;
            cur++;
        }

        if (temp == NULL)
            return; // index out of bounds

        Node<T>* delptr = temp;
        if (temp->prev != NULL)
            temp->prev->next = temp->next;
        if (temp->next != NULL)
            temp->next->prev = temp->prev;
        delete delptr;
    }
};

int main() {
    double_linkedList<int> myList;
    double_linkedList<string> myList_string;

    // Appending elements to the list
    myList.print();
    myList.append_at_tail(10);
    myList.print();
    myList.append_at_tail(20);
    myList.append_at_tail(30);

    // Printing the list
    cout << "List after appending elements: ";
    myList.print(); // Output: 10 20 30

    // Inserting at specific positions
    myList.insert_at_pos(15, 1);
    cout << "List after inserting 15 at position 1: ";
    myList.print(); // Output: 10 15 20 30

    myList.insert_at_pos(5, 0);
    cout << "List after inserting 5 at position 0: ";
    myList.print(); // Output: 5 10 15 20 30

    myList.insert_at_pos(25, 4);
    cout << "List after inserting 25 at position 4: ";
    myList.print(); // Output: 5 10 15 20 25 30
    cout << myList.size() << '\n';

    cout << myList.is_exist(30) << '\n';
    cout << myList.is_exist(5) << '\n';
    cout << myList.is_item_equal(5, 0) << '\n';

    myList_string.append_at_tail("Habiba");
    myList_string.remove_Head();
  //  myList_string.print();

    myList_string.append_at_tail("Abdelaziz");
    myList_string.append_at_tail("baba");
    myList_string.append_at_tail("mama");
    myList_string.append_at_tail("rahem");
    myList_string.append_at_tail("roiaa");
    myList_string.remove_Head();

    myList_string.print();
}
