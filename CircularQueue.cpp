#include <iostream>
using namespace std;

#define SIZE 10

int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int value) {
    if ((front == 0 && rear == SIZE - 1) || (rear + 1) % SIZE == front) {
        cout << "Queue Overflow" << endl;
        return;
    }
    if (front == -1) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % SIZE;
    }
    queue[rear] = value;
}

void dequeue() {
    if (front == -1) {
        cout << "Queue Underflow" << endl;
        return;
    }
    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % SIZE;
    }
}

void display() {
    if (front == -1) {
        cout << "Queue is Empty" << endl;
        return;
    }
    int i = front;
    while (true) {
        cout << queue[i] << " ";
        if (i == rear) break;
        i = (i + 1) % SIZE;
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
        } else if (num == 2) {
            dequeue();
            cout << "Value has been successfully dequeued(deleted)." << endl;
        } else if (num == 3) {
            display();
        } else if (num == 4) {
            cout << "Exited Successfully." << endl;
            break;
        } else {
            cout << "Invalid Choice!" << endl;
        }
    }

    return 0;
}