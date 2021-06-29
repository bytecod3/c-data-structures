
// functions
/*
1. enqueue
2. dequeue
3. display
4. peek
*/

#include <stdio.h>

struct node
{
	int data,
	struct node * next;
};

// initially, the queue contains no element
struct node * front = NULL;
struct node * rear = NULL;

// enqueue
void enqueue(int element){
	struct node* newnode;
	newnode = (struct node *) malloc(sizeof(struct node));

	// check if the queue is empty
	if(front == NULL && rear == NULL){
		newnode->data = element;
		newnode->next = NULL;

		front = rear = newnode;
	}else{
		rear->next = newnode;
	}
}

// dequeue
void dequeue(){
	struct node* temp;

	if(front == NULL && rear == NULL){
		printf("Queue is empty");
	}else{
		temp = front;

		printf("%d", front->data);	// optional
		front = front->next;
		free(temp);
	}
}

// display
void display(){
	struct node* temp;
	temp = front;
	if (front == NULL && rear == NULL){
		printf("Queue is empty.\n");	
	}else{
		while(temp != NULL){
			printf("%d\n", temp->data);
			temp=temp->next;
		}
	}
	
}

// peek, prints the first element in the queue
void peek(){
	if (front == NULL && rear == NULL){
		printf("Queue is empty\n");
	}else{
		printf("%d\n", front->data);
	}
}





