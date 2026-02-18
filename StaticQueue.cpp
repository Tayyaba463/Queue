#include <iostream>
using namespace std;

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int value) {

    if (rear == SIZE - 1) {
        cout << "Queue Overflow" << endl;
        return;
    }

    if (front == -1) {
        front = 0;
    }

    rear++;
    queue[rear] = value;
}

void dequeue() {

    if (front == -1 || front > rear) {
        cout << "Queue Underflow" << endl;
        return;
    }

    front++;

    if (front > rear) {
        front = rear = -1;
    }
}

void display() {

    if (front == -1) {
        cout << "Queue is Empty" << endl;
        return;
    }

    for (int i = front; i <= rear; i++) {
        cout << queue[i] << " ";
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