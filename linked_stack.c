/*
This code implements stack data stucture using linked lists
1. push
2. pop
3. peek
4. display
*/

#include <stdio.h>

struct node{
	int data,
	struct node* next;
};

struct node* top;
struct node* tail;

// initially, top = NULL
top = NULL;

void push(int element){
	struct node* newnode;
	if (top == NULL){
		newnode->data = element;
		newnode->next = NULL;
	}else{
		// insert at the top
		newnode->next = top;
		top = newnode;
	}

}

// delete first element
void pop(){
	if(top == NULL){
		printf("Stack is empty\n");
	}else{
		struct node* temp;

		printf("%d\n", top->data);	// optional
		temp = top;
		top = top->next;
		free(temp);
	}
}

// peek - print the first element
void peek(){
	if (top == NULL){
		printf("stack is empty.\n");
	}else{
		printf("%d", top->data);
	}
}

// display - print all elements in the stack
void display(){
	if (top == NULL){
		printf("stack is empty\n");
	}else{
		while(top != NULL){
			printf("%d\n", top->data);
			top = top->next;
		}
	}
}





