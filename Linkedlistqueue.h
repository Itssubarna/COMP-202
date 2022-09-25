#ifndef Linkedlistqueue_h
#define Linkedlistqueue_h

#include "queue.h"
#include "Linkedlist.h"


class Linkedlistqueue : public queue {

    public:

    LinkedList *l = new LinkedList();

    void enqueue(int a);
    void dequeue();
    bool isEmpty();
    bool isFull();
    int front();
    int back();


};


#endif