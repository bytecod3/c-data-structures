/*
This code implements queue data structure using arrays and static memory alocation
The following functions are implemented:
    enqueue   -> insert element
    dequeue   -> remove element
    peek    -> print the first element in the queue
    display -> print all the elements in the queue
*/


#include <stdio.h>
#include <stdlib.h>

#define N 6
int queue[N];
int front = -1;
int rear = -1;
int i;

/* functions */

// enque - insert element
void enqueue(int element){
    if (rear == N-1)
    {
        // check for overflow condition
        printf("Could not insert element. Queue full");
    }else if(front == -1 && rear == -1){
        // insert into an empty list
        front++;
        rear++;
        queue[rear] = element;
    }else{
        // queue contains elements 
        rear++;
        queue[rear] == element;
    }
    
}

// deque - delete element
void dequeue(){
    if (front == -1 && rear == -1)
    {
        // queue is empty
        printf("Empty list");
    }else if(front == rear){
        // queue contains one element
        front = rear = -1;
    }else{
        printf("Deleted element: %d", queue[front]);
        front++;
    }
}

// peek - view initial element
void peek(){
    if (front == -1)
    {
        // empty queue
        printf("Empty queue");
    }else{
        printf("%d", queue[front]);
    }
}


// display - print the entire queue
void display(){
    if(front == -1){
        // empty queue
        printf("Empty queue");
    }else{
        for(i = 0; i < N; i++){
            printf("%d", queue[i]);
        }
    }
   
}
