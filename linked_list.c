#include <stdio.h>
#include <stdlib.h>

int choice, count;
struct node{
    int data;
    struct node* next;
};

struct node* head, *newnode, *temp;

// initially head points to 0
head = 0;

// create a new node
void init_list(){
    while(choice){
        // create a new node
        newnode = (struct node *) malloc(sizeof(struct node*));

        printf("Enter data: ");
        scanf("%d", &newnode->data);

        // the newnode's address part now contains a zero
        newnode->next = 0;

        // update head address to the new node
        if (head == 0){
            head = newnode;
            temp = newnode;
        }else{
            temp->next = newnode;
            temp = newnode; // move the temp to the new node
        }

        // ask user for input
        printf("Insert data(0, 1)?");
        scanf("%d", &choice);
    }

}

void traverse_list(){
    temp = head;
    while(temp != 0 ){
        printf("%d", temp->data);
        temp = temp->next;
    }
}

// return number of elements in the linked list
int list_count(){
    temp = head;
    while (temp != 0){
        temp = temp->next;
        count++;
    }

    return count;
}





