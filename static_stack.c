/*
This code implements a stack LIFO using arrays and static memory allocation
functions: 
push
pop
peek
display
*/

#include <stdio.h>

#define N 5

#define TRUE 1 // boolean
#define FALSE 0

int stack[N];
int top = -1;
int i, popped_element_element;

//add_to_stack
void push(int element){ 
    if (top == -1){
        // stack is empty
        top++;
        stack[top] = element;
    }else if(top == N-1){
        // stack is full
        printf("Could not insert element. Stack full");
    }else{
        // stack contains some elements. insert at the first position
        top++;
        stack[top] = element;
    }
}

//delete_element
int pop(){
    if (top == -1){
       // empty stack
       printf("Stack is empty");
    }else if(top == 0){
         popped_element_element = stack[0]; // return deleted element
         top--;
    }else{
        popped_element_element = stack[top];
        top--;
    }

    return popped_element_element;    
}

//peek_element
void peek(){
    if (top == -1){
        printf("Stack is empty");
    }else{
        printf("%d", stack[top]);
    }
}

//display_stack
void display(){
    if(top == -1){
        printf("Stack is empty. No elements to print");
    }else{
        for(int i; i < N; i++){
            printf("%d", stack[top]);
        }
    }
}

// is_empty
int is_empty(){
    if (top == -1){
        return  TRUE;
    }else{
        return FALSE;
    }
}

// is_full
int is_full(){
    if(top == N-1){
        return TRUE;
    }else{
        return FALSE;
    }
}


