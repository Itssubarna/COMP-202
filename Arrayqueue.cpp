#include <iostream>
#include "Arrayqueue.h"
#include "queue.h"


using namespace std;


bool Arrayqueue :: isEmpty()
{
    if (f == b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Arrayqueue :: isFull()
{
    if (b == MAX_SIZE - 1)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

void Arrayqueue :: enqueue(int a)
{
    if (!isFull())
    {
        b++;
        arr[b]=a;
    }
}

void Arrayqueue :: dequeue() 
{
   if(!isEmpty())
    {
        f++;
    }   
    
}

int Arrayqueue :: front()
{
    if(!isEmpty())
    {
        return arr[f+1];
    }
}
int Arrayqueue :: back()
{
    if (isEmpty())
    {
        return arr[b];
    }
}
