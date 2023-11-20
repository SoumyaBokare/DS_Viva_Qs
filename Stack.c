// // Question 16 - Write a C/C++ program to implement stack operations (PUSH) using array.

#include <stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int data) {
    if (top == MAX_SIZE - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = data;
}

int main() {
    push(1);
    push(2);
    push(3);
    return 0;
}

/////////////////////////////////////////

// // Question 17 - Write a C/C++ program to implement stack operations (PUSH and POP) using array.

#include <stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int data) {
    if (top == MAX_SIZE - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = data;
}

int pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        return -1;
    }
    return stack[top--];
}

int main() {
    push(1);
    push(2);
    push(3);
    printf("%d\n", pop());  // Output: 3
    printf("%d\n", pop());  // Output: 2
    return 0;
}

/////////////////////////////////////////

// // Question 18 - Write a C/C++ program to implement stack operation (PUSH) using linked list.

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* top = NULL;

void push(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory error\n");
        return;
    }
    newNode->data = data;
    newNode->next = top;
    top = newNode;
}

int main() {
    push(1);
    push(2);
    push(3);
    return 0;
}

/////////////////////////////////////////

// // Question 19 - Write a C/C++ program to evaluate postfix expressions using stack .

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int data) {
    if (top == MAX_SIZE - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = data;
}

int pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        return -1;
    }
    return stack[top--];
}

int evaluatePostfix(char* exp) {
    for (int i = 0; exp[i]; ++i) {
        if (isdigit(exp[i])) {
            push(exp[i] - '0');
        } else {
            int val1 = pop();
            int val2 = pop();
            switch (exp[i]) {
                case '+': push(val2 + val1); break;
                case '-': push(val2 - val1); break;
                case '*': push(val2 * val1); break;
                case '/': push(val2 / val1); break;
            }
        }
    }
    return pop();
}

int main() {
    char exp[] = "231*+9-";
    printf("postfix evaluation: %d", evaluatePostfix(exp));  // Output: -4
    return 0;
}

/////////////////////////////////////////

// // Question 20 - Write a C/C++ program to reverse a list of given numbers using stack.

#include <stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int data) {
    if (top == MAX_SIZE - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = data;
}

int pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        return -1;
    }
    return stack[top--];
}

void reverse(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        push(arr[i]);
    }
    for (int i = 0; i < size; ++i) {
        arr[i] = pop();
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverse(arr, size);
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);  // Output: 5 4 3 2 1
    }
    return 0;
}

