#include <stdio.h>
#include <stdlib.h>

int choice, count, position, i = 1;
struct node{
    int data;
    struct node* next;
};

struct node* head, *new_node, *temp;

// initially head points to 0
head = 0;

// create a new node
void init_list(){
    while(choice){
        // create a new node
        new_node = (struct node *) malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d", &new_node->data);

        // the new_node's address part now contains a zero
        new_node->next = 0;

        // update head address to the new node
        if (head == 0){
            head = new_node;
            temp = new_node;
        }else{
            temp->next = new_node;
            temp = new_node; // move the temp to the new node
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

void insert_at_beginning(){
    new_node = (struct node *) malloc(sizeof(struct node));
    printf("Enter data to insert: ");
    scanf("%d", &new_node->data);

    // update pointers
    if(head == 0){
        new_node->next = head;
        head = new_node;
    }
}

void insert_at_end(){
    // create a new node
    new_node = (struct node *) malloc(sizeof(struct node));
    printf("Enter data to insert: ");
    scanf("%d", &new_node->data);

    while (temp->next != 0){
        temp = temp->next;
    }

    temp->next = new_node;
    
}

void insert_after_position(int position){
    // call count function to get the number of elements in the list
    int num = list_count();

    if(num > position){
        printf("Invalid position."); // list full or negative
    }else{
        while(i < position){
            temp = temp->next; // update temp
            i++;
        }

        new_node = (struct node *) malloc(sizeof(struct node));

        printf("Enter data:"); // ask for data from user
        scanf("%d", &new_node->data);

        new_node->next = temp->next;
        temp->next = new_node;
        
    }
}


