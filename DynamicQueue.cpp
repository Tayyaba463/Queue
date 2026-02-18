#include <iostream>
#include <stdlib.h>

using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;


void enqueue(int value) {
    Node* temp = (Node*)malloc(sizeof(Node));

    temp->data = value;
    temp->next = NULL;

    if (rear == NULL) {
        front = rear = temp;
    } else {
        rear->next = temp;
        rear = temp;
    }
}


void dequeue() {
    if (front == NULL) {
        cout << "Queue Underflow" << endl;
        return;
    }

    Node* temp = front;
    front = front->next;

    if (front == NULL) {
        rear = NULL;
    }

    free(temp);
}


void display() {
    if (front == NULL) {
        cout << "Queue is Empty" << endl;
        return;
    }

    Node* curr = front;

    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }

    cout << endl;
}

int main() {

    int num, value;

    while (true) {

        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;

        cin >> num;

        if (num == 1) {

            cout << "Enter value: ";
            cin >> value;

            enqueue(value);

        }

        else if (num == 2) {

            dequeue();
            cout << "Value has been successfully dequeued(deleted)." << endl;

        }

        else if (num == 3) {

            display();

        }

        else if (num == 4) {

            cout << "Exited Successfully." << endl;
            break;

        }

        else {

            cout << "Invalid Choice!" << endl;

        }
    }

    return 0;
}