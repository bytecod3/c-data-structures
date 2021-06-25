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
int stack[N];
int top = -1;
int i, popped;

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
         popped = stack[0]; // return deleted element
         top--;
    }else{
        popped = stack[top];
        top--;
    }

    return popped;    
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

/* todo: check functions
1. is_true()
2. is_empty()
*/
