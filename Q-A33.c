#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};

struct Node* createNode(int data) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void addElement(struct Node **head, int data) {
    struct Node *newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node *temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    printf("Element %d added to the linked list.\n", data);
}
void removeElement(struct Node **head, int data) {
    if (*head == NULL) {
        printf("Linked list is empty.\n");
        return;
    }

    struct Node *temp = *head, *prev = NULL;
    
    if (temp != NULL && temp->data == data) {
        *head = temp->next;
        free(temp);
        printf("Element %d removed from the linked list.\n", data);
        return;
    }
    while (temp != NULL && temp->data != data) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Element %d not found in the linked list.\n", data);
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("Element %d removed from the linked list.\n", data);
}

void displayList(struct Node *head) {
    if (head == NULL) {
        printf("Linked list is empty.\n");
        return;
    }

    printf("Linked list elements: ");
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void writeToFile(struct Node *head, const char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        exit(EXIT_FAILURE);
    }

    while (head != NULL) {
        fprintf(file, "%d ", head->data);
        head = head->next;
    }

    fclose(file);
    printf("Data written to file successfully.\n");
}

int main() {
    struct Node *head = NULL;
    int choice, data;

    do {
        printf("\nMenu:\n");
        printf("1. Add Element\n");
        printf("2. Remove Element\n");
        printf("3. Display List\n");
        printf("4. Write to File\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to add: ");
                scanf("%d", &data);
                addElement(&head, data);
                break;
            case 2:
                printf("Enter the element to remove: ");
                scanf("%d", &data);
                removeElement(&head, data);
                break;
            case 3:
                displayList(head);
                break;
            case 4:
                writeToFile(head, "linked_list_data.txt");
                break;
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 5);
    struct Node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}

