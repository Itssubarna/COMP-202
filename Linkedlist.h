
#ifndef Linkedlist_h
#define Linkedlist_h
#include <cstddef>


class Node {
    public:

    int data;
    Node *next;

    //Node();
};

class LinkedList{

    public:

    Node *head;
    Node *tail;

    //LinkedList();

    bool is_empty();
    void addToHead(Node *&a);
    void addToTail(Node *&a);
    void add(int x, Node *&pred);
    void removeFromHead();
    void removeFromTail();
    void remove(int a);
    void traverse();
    int extractfromhead();
    int extractfromtail();


};

#endif