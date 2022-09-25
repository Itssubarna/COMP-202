#ifndef queue_h
#define queue_h
#include <cstddef>

class queue
{
    public:

        virtual void enqueue(int a)=0;
        virtual void dequeue()=0;
        virtual bool isEmpty()=0;
        virtual bool isFull()=0;
        virtual int front()=0;
        virtual int back()=0;

};


#endif