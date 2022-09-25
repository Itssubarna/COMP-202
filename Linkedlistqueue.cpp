
#include "queue.h"
#include "Linkedlistqueue.h"
#include "Linkedlist.h"
#include "Linkedlist.cpp"

#include <iostream>

using namespace std;

void Linkedlistqueue :: enqueue(int a){

    Node *p = new Node();
    p->data = a;

    l -> addToHead(*&p);

}


void Linkedlistqueue :: dequeue(){

    l -> removeFromTail();

}


bool Linkedlistqueue :: isEmpty(){

    bool r;

    r = l->is_empty();
    return r;

}

bool Linkedlistqueue :: isFull(){

    return false;
    
}

int Linkedlistqueue :: front(){

    int r;

    r = l -> extractfromtail();
    return r;

}


int Linkedlistqueue :: back(){

    int r;

    r = l -> extractfromhead();
    return r;
}