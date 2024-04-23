#include <iostream>
#define ll long long

using namespace std;

template<typename T>
class Node {
public:
    T data;
    Node* next;
};

template<typename T>
class queue_based_nodes {
public:
    Node<T>* first;
    Node<T>* last;
    ll size;

    // Constructor to initialize the queue
    queue_based_nodes() {
        size = 0;
        first = NULL;
        last = NULL;
    }

    // Method to enqueue an element
    void enqueue(T element) {
        Node<T>* newnode = new Node<T>;
        newnode->data = element;
        newnode->next = nullptr;

        if (is_empty()) {
            first = newnode;
            last = newnode;
        } else {
            last->next = newnode;
            last = newnode;
        }
        size++;
    }

    // Method to check if the queue is empty
    bool is_empty() {
        return (first == NULL);
    }

    // Method to return the size of the queue
    ll Size() {
        return size;
    }

    // Method to print the elements of the queue
    void print() {
        Node<T>* temp = first;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << '\n';
    }

    // Method to clear the queue
    void clear() {
        if (!is_empty()) {
            Node<T>* temp = first;
            Node<T>* delptr = nullptr;
            while (temp != nullptr) {
                delptr = temp;
                temp = temp->next;
                delete delptr;
            }
        }
        first = NULL;
        last = NULL;
        size = 0;
    }

    // Method to get the first element of the queue
    T first_Node() {
        if (!is_empty()) {
            return first->data;
        }
        // Return default value if queue is empty
        return T();
    }

    // Method to dequeue an element
    T dequeue() {
        if (!is_empty()) {
            Node<T>* temp = first;
            T temp_data = temp->data;
            first = first->next;
            delete temp;
            size--;
            return temp_data;
        }
        // Return default value if queue is empty
        return T();
    }
};

int main() {
    queue_based_nodes<ll> queue1;
    queue1.enqueue(1);
    queue1.enqueue(2);
    queue1.enqueue(3);
    queue1.enqueue(4);

    cout << queue1.Size() << '\n'; // Print size of the queue

    queue1.print(); // Print elements of the queue
}
