#include "queue.h"
#include "Arrayqueue.h"
#include "Arrayqueue.cpp"
#include "Linkedlistqueue.h"
#include "Linkedlistqueue.cpp"
#include "Linkedlist.h"
// #include "Linkedlist.cpp"



#include <iostream>

using namespace std;

int main()

{
    queue *q1 = new Arrayqueue();
    q1->enqueue(5);
    q1->enqueue(25);
    q1->enqueue(40);
    q1->dequeue();
    q1->dequeue();

    
    if (q1->isEmpty() == 0)
    {
        cout<<"The queue is not empty"<<endl;
    }
    else
    {
        cout<<"\nThe queue is empty"<<endl;
    }

    delete q1;

    queue *q2 = new Linkedlistqueue();
    q2 -> enqueue(1);
    q2 -> enqueue(11);
    q2 -> enqueue(30);
    q2 -> dequeue();
    q2 -> dequeue();

    if(q2 -> isEmpty() == 0){
        cout<<"\nThe queue is not empty."<<endl;
    }   else {
        cout<<"\nThe queue is empty."<<endl;
    }


    cout<<"\nThe first element of the queue is: "<<q2-> front()<<endl;

    cout<<"\nThe last element of the queue is: "<<q2 -> back()<<endl;


    delete q2;
}
