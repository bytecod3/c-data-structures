#include <stdio.h>
#include <stdlib.h>

int choice, count, position, i = 1;

struct node{
    int data;
    struct node* next;
};

struct node* head = NULL, *new_node, *temp, *previous_node, *current_node; // initially head points to NULL

// create a new node
void init_list(){
    while(choice){
        // create a new node
        new_node = (struct node *) malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d", &new_node->data);

        // the new_node's address part now contains a zero
        new_node->next = NULL;

        // update head address to the new node
        if (head == NULL){
            head = new_node;
            temp = new_node;
        }else{
            temp->next = new_node;
            temp = new_node; // move the temp to the new node
        }

        // ask user for input
        printf("Insert data(NULL, 1)?");
        scanf("%d", &choice);
    }

}

void traverse_list(){
    temp = head;
    while(temp != NULL ){
        printf("%d", temp->data);
        temp = temp->next;
    }
}

// return number of elements in the linked list
int list_count(){
    temp = head;
    while (temp != NULL){
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
    if(head == NULL){
        new_node->next = head;
        head = new_node;
    }
}

void insert_at_end(){
    // create a new node
    new_node = (struct node *) malloc(sizeof(struct node));
    printf("Enter data to insert: ");
    scanf("%d", &new_node->data);

    while (temp->next != NULL){
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


// deletion functions
void delete_from_top(){
    if(head == NULL){
        // list is empty. Nothing to delete
        printf("Empty list. Nothing to delete");
    }else{
        // 
        temp = head;
        head = temp->next;
        free(temp); // release the memory
    }
}

void delete_from_end(){
    if(head == NULL){
        printf("Empty list. Nothing to delete");
    }else{
        // traverse the linked list
        temp = head;
        while(temp->next != NULL){
            // if we are not yet at the end of the list
            previous_node = temp;
            temp = temp->next;
        }

        // if a zero is found, we are at the last element
        free(temp);
    }    
}

void delete_from_position(int position){
    int count = 0; // keep track of the traversed list elements

    // mandatory checks if the list is empty
    if(head == NULL){
        printf("Empty list.");
    }else if(head->next == NULL){ // if there exists only one element in the list
        temp = head->next;
        head = NULL;
        free(temp);
    }else{
        temp = head;
        while(temp->next != NULL){ // TODO:verify this implementation
            previous_node = temp;
            temp = temp->next;
            if (count == position){
                previous_node->next = temp->next;
                free(temp);
                
            }            
            count++;
        }
        
    }
}

// return the address of the last element in the linked list
struct node* get_tail(struct node* head){
    if(head == NULL) return NULL;
    while(head->next != NULL){
        head = head->next;
    }
    return head;
}

struct node* linear_search(struct node* head, int key){
    while(head->next != NULL && key != head->data){
        head = head->next;
    }

    return top;
}

void build_sorted_list(struct node* head, int num){
    current_node = head;
    while(current_node->next != NULL && num > current_node->data){
        previous_node = current_node;
        current_node = current_node->next;
    }

    new_node = (struct node*) malloc(sizeof(struct node));
    new_node->data = num;

    // insert the number num
    previous_node->next = new_node;
    new_node->next = current_node;
}

