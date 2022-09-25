#ifndef Arrayqueue_h
#define Arrayqueue_h


#include <iostream>
#include "queue.h"
using namespace std;

#define MAX_SIZE 10
class Arrayqueue : public queue
{
    private:
    int arr[MAX_SIZE];
    int f;
    int b;

    public:
        Arrayqueue()
        {
            f = -1;
            b = -1;
        }

        void enqueue(int a);
        void dequeue();
        bool isEmpty();
        bool isFull();
        int front();
        int back();
};

#endif 