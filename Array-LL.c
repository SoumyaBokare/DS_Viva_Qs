// // Question 5 - Write a C/C++ program to insert and delete a number from a given location in an array.

// #include <stdio.h>

// #define SIZE 10

// void insertAt(int arr[], int *n, int pos, int x) {
//     for (int i = *n; i > pos; i--) {
//         arr[i] = arr[i - 1];
//     }
//     arr[pos] = x;
//     (*n)++;
// }

// void deleteAt(int arr[], int *n, int pos) {
//     for (int i = pos; i < *n - 1; i++) {
//         arr[i] = arr[i + 1];
//     }
//     (*n)--;
// }

// void printArray(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int arr[SIZE];
//     int n = 0;

//     printf("Enter the number of elements (up to %d): ", SIZE);
//     scanf("%d", &n);

//     printf("Enter the elements:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int choice, pos, x;
//     while (1) {
//         printf("\n1. Insert an element\n");
//         printf("2. Delete an element\n");
//         printf("3. Print the array\n");
//         printf("4. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 printf("Enter the position to insert: ");
//                 scanf("%d", &pos);
//                 printf("Enter the element to insert: ");
//                 scanf("%d", &x);
//                 insertAt(arr, &n, pos, x);
//                 printf("Element inserted successfully.\n");
//                 break;
//             case 2:
//                 printf("Enter the position to delete: ");
//                 scanf("%d", &pos);
//                 deleteAt(arr, &n, pos);
//                 printf("Element deleted successfully.\n");
//                 break;
//             case 3:
//                 printf("Array elements: ");
//                 printArray(arr, n);
//                 break;
//             case 4:
//                 printf("Exiting...\n");
//                 return 0;
//             default:
//                 printf("Invalid choice. Please try again.\n");
//         }
//     }

//     return 0;
// }

// /////////////////////////////////////////////////

// // Question 6 - Write a C/C++ program to create a singly linked list.

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct Node {
//     int data;
//     struct Node* next;
// } Node;

// Node* createNode(int data) {
//     Node* newNode = (Node*)malloc(sizeof(Node));
//     if (!newNode) {
//         printf("Memory error\n");
//         return NULL;
//     }
//     newNode->data = data;
//     newNode->next = NULL;
//     return newNode;
// }

// Node* addNode(Node* head, int data) {
//     Node* newNode = createNode(data);
//     if (head == NULL) {
//         head = newNode;
//     } else {
//         Node* temp = head;
//         while (temp->next != NULL) {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//     }
//     return head;
// }

// void printList(Node* head) {
//     if (head == NULL) {
//         printf("List is empty\n");
//         return;
//     }
//     Node* temp = head;
//     while (temp != NULL) {
//         printf("%d ", temp->data);
//         temp = temp->next;
//     }
//     printf("\n");
// }

// int main() {
//     Node* head = NULL;
//     int data;
//     int choice;

//     while (1) {
//         printf("\n1. Add a node\n");
//         printf("2. Print the list\n");
//         printf("3. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 printf("Enter the data for the node: ");
//                 scanf("%d", &data);
//                 head = addNode(head, data);
//                 printf("Node added successfully.\n");
//                 break;
//             case 2:
//                 printf("Linked List: ");
//                 printList(head);
//                 break;
//             case 3:
//                 printf("Exiting...\n");
//                 return 0;
//             default:
//                 printf("Invalid choice. Please try again.\n");
//         }
//     }

//     return 0;
// }

// // /////////////////////////////////////////////////

// // // Question 7 - Write a C/C++ program to create a circular linked list.

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct Node {
//     int data;
//     struct Node* next;
// } Node;

// Node* createNode(int data) {
//     Node* newNode = (Node*)malloc(sizeof(Node));
//     if (!newNode) {
//         printf("Memory error\n");
//         return NULL;
//     }
//     newNode->data = data;
//     newNode->next = NULL;
//     return newNode;
// }

// Node* addNode(Node* head, int data) {
//     Node* newNode = createNode(data);
//     if (head == NULL) {
//         head = newNode;
//         newNode->next = head;
//     } else {
//         Node* temp = head;
//         while (temp->next != head) {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//         newNode->next = head;
//     }
//     return head;
// }

// void printList(Node* head) {
//     if (head == NULL) {
//         printf("List is empty\n");
//         return;
//     }
//     Node* temp = head;
//     printf("Circular Linked List: ");
//     do {
//         printf("%d ", temp->data);
//         temp = temp->next;
//     } while (temp != head);
//     printf("\n");
// }

// int main() {
//     Node* head = NULL;
//     int data;
//     int choice;

//     while (1) {
//         printf("\n1. Add a node\n");
//         printf("2. Print the list\n");
//         printf("3. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 printf("Enter the data for the node: ");
//                 scanf("%d", &data);
//                 head = addNode(head, data);
//                 printf("Node added successfully.\n");
//                 break;
//             case 2:
//                 printList(head);
//                 break;
//             case 3:
//                 printf("Exiting...\n");
//                 return 0;
//             default:
//                 printf("Invalid choice. Please try again.\n");
//         }
//     }

//     return 0;
// }

// // /////////////////////////////////////////////////

// // // Question 8 - Write a C/C++ program to create a doubly linked list.

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct Node {
//     int data;
//     struct Node* next;
//     struct Node* prev;
// } Node;

// Node* createNode(int data) {
//     Node* newNode = (Node*)malloc(sizeof(Node));
//     if (!newNode) {
//         printf("Memory error\n");
//         return NULL;
//     }
//     newNode->data = data;
//     newNode->next = NULL;
//     newNode->prev = NULL;
//     return newNode;
// }

// Node* addNode(Node* head, int data) {
//     Node* newNode = createNode(data);
//     if (head == NULL) {
//         head = newNode;
//         head->next = head;
//         head->prev = head;
//     } else {
//         Node* temp = head->prev;
//         temp->next = newNode;
//         newNode->prev = temp;
//         newNode->next = head;
//         head->prev = newNode;
//     }
//     return head;
// }

// void printList(Node* head) {
//     if (head == NULL) {
//         printf("List is empty\n");
//         return;
//     }
//     Node* temp = head;
//     printf("Circular Doubly Linked List: ");
//     do {
//         printf("%d ", temp->data);
//         temp = temp->next;
//     } while (temp != head);
//     printf("\n");
// }

// int main() {
//     Node* head = NULL;
//     int data;
//     int choice;

//     while (1) {
//         printf("\n1. Add a node\n");
//         printf("2. Print the list\n");
//         printf("3. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 printf("Enter the data for the node: ");
//                 scanf("%d", &data);
//                 head = addNode(head, data);
//                 printf("Node added successfully.\n");
//                 break;
//             case 2:
//                 printList(head);
//                 break;
//             case 3:
//                 printf("Exiting...\n");
//                 return 0;
//             default:
//                 printf("Invalid choice. Please try again.\n");
//         }
//     }

//     return 0;
// }

// // /////////////////////////////////////////////////

// // // Question 9 - Write a C/C++ program to create a circular doubly linked list.

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory error\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

Node* addNode(Node* head, int data) {
    Node* newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
        newNode->next = head;
        newNode->prev = head;
    } else {
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
        head->prev = newNode;
        newNode->next = head;
    }
    return head;
}

void printList(Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    Node* temp = head;
    printf("Circular Doubly Linked List: ");
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

int countNodes(Node* head) {
    if (head == NULL) {
        return 0;
    }
    int count = 0;
    Node* temp = head;
    do {
        count++;
        temp = temp->next;
    } while (temp != head);
    return count;
}

int main() {
    Node* head = NULL;
    int data;
    int choice;

    while (1) {
        printf("\n1. Add a node\n");
        printf("2. Print the list\n");
        printf("3. Count the number of nodes\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the data for the node: ");
                scanf("%d", &data);
                head = addNode(head, data);
                printf("Node added successfully.\n");
                break;
            case 2:
                printList(head);
                break;
            case 3:
                printf("Number of nodes: %d\n", countNodes(head));
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

// // /////////////////////////////////////////////////

// // // Question 10 - Write a C/C++ program to count the number of nodes in the singly linked list

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct Node {
//     int data;
//     struct Node* next;
// } Node;

// Node* createNode(int data) {
//     Node* newNode = (Node*)malloc(sizeof(Node));
//     if (!newNode) {
//         printf("Memory error\n");
//         return NULL;
//     }
//     newNode->data = data;
//     newNode->next = NULL;
//     return newNode;
// }

// Node* addNode(Node* head, int data) {
//     Node* newNode = createNode(data);
//     if (head == NULL) {
//         head = newNode;
//     } else {
//         Node* temp = head;
//         while (temp->next != NULL) {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//     }
//     return head;
// }

// int countNodes(Node* head) {
//     int count = 0;
//     Node* temp = head;
//     while (temp != NULL) {
//         count++;
//         temp = temp->next;
//     }
//     return count;
// }

// int main() {
//     Node* head = NULL;
//     head = addNode(head, 1);
//     head = addNode(head, 2);
//     head = addNode(head, 3);
//     printf("Number of nodes: %d\n", countNodes(head));
//     return 0;
// }

// // /////////////////////////////////////////////////

// // // Question 11 - Write a C/C++ program to delete element at the begining/middle/end of singly linkedlist

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct Node {
//     int data;
//     struct Node* next;
// } Node;

// Node* createNode(int data) {
//     Node* newNode = (Node*)malloc(sizeof(Node));
//     if (!newNode) {
//         printf("Memory error\n");
//         return NULL;
//     }
//     newNode->data = data;
//     newNode->next = NULL;
//     return newNode;
// }

// Node* addNode(Node* head, int data) {
//     if (head == NULL) {
//         head = createNode(data);
//     } else {
//         Node* temp = head;
//         while (temp->next != NULL) {
//             temp = temp->next;
//         }
//         temp->next = createNode(data);
//     }
//     return head;
// }

// Node* deleteFromBeginning(Node* head) {
//     if (head == NULL) {
//         printf("List is empty\n");
//         return NULL;
//     }
//     Node* temp = head;
//     head = head->next;
//     free(temp);
//     return head;
// }

// Node* deleteFromEnd(Node* head) {
//     if (head == NULL) {
//         printf("List is empty\n");
//         return NULL;
//     }
//     Node *temp = head, *prev = NULL;
//     while (temp->next != NULL) {
//         prev = temp;
//         temp = temp->next;
//     }
//     if (prev != NULL) {
//         prev->next = NULL;
//     } else {
//         head = NULL;
//     }
//     free(temp);
//     return head;
// }

// Node* deleteFromMiddle(Node* head, int position) {
//     if (head == NULL) {
//         printf("List is empty\n");
//         return NULL;
//     }
//     Node *temp = head, *prev = NULL;
//     while (position-- && temp != NULL) {
//         prev = temp;
//         temp = temp->next;
//     }
//     if (temp == NULL) {
//         printf("Position out of range\n");
//         return head;
//     }
//     if (prev != NULL) {
//         prev->next = temp->next;
//     } else {
//         head = temp->next;
//     }
//     free(temp);
//     return head;
// }

// int main() {
//     Node* head = NULL;
//     head = addNode(head, 1);
//     head = addNode(head, 2);
//     head = addNode(head, 3);
//     head = deleteFromBeginning(head);
//     head = deleteFromEnd(head);
//     head = deleteFromMiddle(head, 1);
//     return 0;
// }

// ///////////////////////////////////////

// // // Question 12 - Write a C/C++ program to insert element at the begining/middle/end of singly linkedlist

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct Node {
//     int data;
//     struct Node* next;
// } Node;

// Node* createNode(int data) {
//     Node* newNode = (Node*)malloc(sizeof(Node));
//     if (!newNode) {
//         printf("Memory error\n");
//         return NULL;
//     }
//     newNode->data = data;
//     newNode->next = NULL;
//     return newNode;
// }

// Node* insertAtBeginning(Node* head, int data) {
//     Node* newNode = createNode(data);
//     newNode->next = head;
//     return newNode;
// }

// Node* insertAtEnd(Node* head, int data) {
//     if (head == NULL) {
//         return createNode(data);
//     } else {
//         Node* temp = head;
//         while (temp->next != NULL) {
//             temp = temp->next;
//         }
//         temp->next = createNode(data);
//     }
//     return head;
// }

// Node* insertAtMiddle(Node* head, int data, int position) {
//     Node* newNode = createNode(data);
//     Node *temp = head, *prev = NULL;
//     while (position-- && temp != NULL) {
//         prev = temp;
//         temp = temp->next;
//     }
//     if (prev != NULL) {
//         prev->next = newNode;
//     } else {
//         head = newNode;
//     }
//     newNode->next = temp;
//     return head;
// }

// int main() {
//     Node* head = NULL;
//     head = insertAtBeginning(head, 1);
//     head = insertAtEnd(head, 3);
//     head = insertAtMiddle(head, 2, 1);
//     return 0;
// }

// // /////////////////////////////////////////////////

// // // Question 13 - Write a C/C++ program to search a particular number in singly linked listcircular linked list/circular doubly linked list/doubly linked list.

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct Node {
//     int data;
//     struct Node* next;
// } Node;

// Node* createNode(int data) {
//     Node* newNode = (Node*)malloc(sizeof(Node));
//     if (!newNode) {
//         printf("Memory error\n");
//         return NULL;
//     }
//     newNode->data = data;
//     newNode->next = NULL;
//     return newNode;
// }

// Node* addNode(Node* head, int data) {
//     if (head == NULL) {
//         head = createNode(data);
//     } else {
//         Node* temp = head;
//         while (temp->next != NULL) {
//             temp = temp->next;
//         }
//         temp->next = createNode(data);
//     }
//     return head;
// }

// int searchNode(Node* head, int data) {
//     Node* temp = head;
//     while (temp != NULL) {
//         if (temp->data == data) {
//             return 1;
//         }
//         temp = temp->next;
//     }
//     return 0;
// }

// int main() {
//     Node* head = NULL;
//     head = addNode(head, 1);
//     head = addNode(head, 2);
//     head = addNode(head, 3);
//     printf("%d\n", searchNode(head, 2));  // Output: 1
//     printf("%d\n", searchNode(head, 4));  // Output: 0
//     return 0;
// }

// // /////////////////////////////////////////////////

// // // Question 14 - Write a C/C++ program to delete a particular node in linked list/circular linked list/circular doubly linked sort/doubly linked list.

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct Node {
//     int data;
//     struct Node* next;
// } Node;

// Node* createNode(int data) {
//     Node* newNode = (Node*)malloc(sizeof(Node));
//     if (!newNode) {
//         printf("Memory error\n");
//         return NULL;
//     }
//     newNode->data = data;
//     newNode->next = NULL;
//     return newNode;
// }

// Node* addNode(Node* head, int data) {
//     if (head == NULL) {
//         head = createNode(data);
//     } else {
//         Node* temp = head;
//         while (temp->next != NULL) {
//             temp = temp->next;
//         }
//         temp->next = createNode(data);
//     }
//     return head;
// }

// Node* deleteNode(Node* head, int data) {
//     Node *temp = head, *prev = NULL;
//     while (temp != NULL) {
//         if (temp->data == data) {
//             if (prev != NULL) {
//                 prev->next = temp->next;
//             } else {
//                 head = temp->next;
//             }
//             free(temp);
//             return head;
//         }
//         prev = temp;
//         temp = temp->next;
//     }
//     return head;
// }

// int main() {
//     Node* head = NULL;
//     head = addNode(head, 1);
//     head = addNode(head, 2);
//     head = addNode(head, 3);
//     head = deleteNode(head, 2);
//     return 0;
// }

// // /////////////////////////////////////////////////

// // // Question 15 - Write a C/C++ program to count the number of nodes in a circular linked list/circular doubly linked list/doubly linked list.

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct Node {
//     int data;
//     struct Node* next;
// } Node;

// Node* createNode(int data) {
//     Node* newNode = (Node*)malloc(sizeof(Node));
//     if (!newNode) {
//         printf("Memory error\n");
//         return NULL;
//     }
//     newNode->data = data;
//     newNode->next = NULL;
//     return newNode;
// }

// Node* addNode(Node* head, int data) {
//     if (head == NULL) {
//         head = createNode(data);
//     } else {
//         Node* temp = head;
//         while (temp->next != NULL) {
//             temp = temp->next;
//         }
//         temp->next = createNode(data);
//     }
//     return head;
// }

// int countNodes(Node* head) {
//     int count = 0;
//     Node* temp = head;
//     while (temp != NULL) {
//         count++;
//         temp = temp->next;
//     }
//     return count;
// }

// int main() {
//     Node* head = NULL;
//     head = addNode(head, 1);
//     head = addNode(head, 2);
//     head = addNode(head, 3);
//     printf("%d\n", countNodes(head));  // Output: 3
//     return 0;
// }



