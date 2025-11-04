#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node *header = NULL;

void insertAtFront(int item) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    newnode->data = item;
    newnode->link = header;
    header = newnode;
}

void insertAtEnd(int item) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    newnode->data = item;
    newnode->link = NULL;
    if (header == NULL) {
        header = newnode;
    } else {
        struct node *ptr = header;
        while (ptr->link != NULL) {
            ptr = ptr->link;
        }
        ptr->link = newnode;
    }
}

// Insert after node with key
void insertAtAny(int item, int key) {
    struct node *ptr = header;
    while (ptr != NULL && ptr->data != key) {
        ptr = ptr->link;
    }
    if (ptr != NULL && ptr->data == key) {
        struct node *newnode = (struct node*)malloc(sizeof(struct node));
        if (newnode == NULL) {
            printf("Memory allocation failed\n");
            return;
        }
        newnode->data = item;
        newnode->link = ptr->link;
        ptr->link = newnode;
    } else {
        printf("Key %d not found, insertion not possible\n", key);
    }
}

void deleteAtFront() {
    if (header == NULL) {
        printf("The linked list is empty\n");
    } else {
        struct node *ptr = header;
        header = header->link;
        printf("Deleted element: %d\n", ptr->data);
        free(ptr);
    }
}

void deleteAtEnd() {
    if (header == NULL) {
        printf("The linked list is empty\n");
    } else {
        struct node *ptr = header;
        struct node *prev = NULL;
        while (ptr->link != NULL) {
            prev = ptr;
            ptr = ptr->link;
        }
        if (prev != NULL)
            prev->link = NULL;
        else
            header = NULL; // List had only one node
        printf("Deleted element: %d\n", ptr->data);
        free(ptr);
    }
}

// Delete node with key
void deleteAtAny(int key) {
    struct node *ptr = header;
    struct node *prev = NULL;
    while (ptr != NULL && ptr->data != key) {
        prev = ptr;
        ptr = ptr->link;
    }
    if (ptr == NULL) {
        printf("Key %d not found, deletion not possible\n", key);
    } else {
        if (prev == NULL) {
            // Deleting first node
            header = ptr->link;
        } else {
            prev->link = ptr->link;
        }
        printf("Deleted item: %d\n", ptr->data);
        free(ptr);
    }
}

// Search for a key
int search(int key) {
    struct node *ptr = header;
    int position = 0;
    while (ptr != NULL) {
        position++;
        if (ptr->data == key)
            return position;
        ptr = ptr->link;
    }
    return -1; // not found
}

// Display the list
void display() {
    struct node *ptr = header;
    if (ptr == NULL) {
        printf("List is empty\n");
    } else {
        printf("List elements: ");
        while (ptr != NULL) {
            printf("%d ", ptr->data);
            ptr = ptr->link;
        }
        printf("\n");
    }
}

int main() {
    int choice, item, key, pos;

    while (1) {
        printf("\n--- Singly Linked List Operations ---\n");
        printf("1. Insert at Front\n");
        printf("2. Insert at End\n");
        printf("3. Insert after a key\n");
        printf("4. Delete at Front\n");
        printf("5. Delete at End\n");
        printf("6. Delete a key\n");
        printf("7. Search for a key\n");
        printf("8. Display the list\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to insert at front: ");
                scanf("%d", &item);
                insertAtFront(item);
                break;
            case 2:
                printf("Enter element to insert at end: ");
                scanf("%d", &item);
                insertAtEnd(item);
                break;
            case 3:
                printf("Enter element to insert: ");
                scanf("%d", &item);
                printf("Enter key after which to insert: ");
                scanf("%d", &key);
                insertAtAny(item, key);
                break;
            case 4:
                deleteAtFront();
                break;
            case 5:
                deleteAtEnd();
                break;
            case 6:
                printf("Enter key to delete: ");
                scanf("%d", &key);
                deleteAtAny(key);
                break;
            case 7:
                printf("Enter key to search: ");
                scanf("%d", &key);
                pos = search(key);
                if (pos != -1)
                    printf("Element %d found at position %d\n", key, pos);
                else
                    printf("Element %d not found\n", key);
                break;
            case 8:
                display();
                break;
            case 9:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
