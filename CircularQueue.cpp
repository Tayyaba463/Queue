#include <iostream>
using namespace std;

#define size 10

int arr[size];
int front = 0;
int rear = -1;
int currentSize = 0;

void push(int value) {
    if (currentSize == size) {
        cout << "Queue is full." << endl;
        return;
    }
    // yaha rear -1 sa jab + 1 hoga tw 0 index ajaiga
        rear = (rear + 1) % size;

    arr[rear] = value;
    currentSize++;
}

int frontIndex() {
    if (currentSize == 0) {
        cout << "Queue is empty." << endl;
        return -1;
    }
    return arr[front];
}

void pop() {
    if (currentSize == 0) {
        cout << "Queue is empty." << endl;
        return;
    }
    // yaha zero index pa value ha wo fornt = 0 ki help sa remove. 
    cout << "Removed: " << arr[front] << endl; 

    // yaha fornt = 1 hojiaga and essi aga increment hota raha ga.
        front = (front + 1) % size;
    
    currentSize--;
}

void display()
{
    if (currentSize == 0)
    {
        cout << "Queue is empty." << endl;
        return;
    }

    int index = front;

    for (int i = 0; i < currentSize; i++)
    {
        cout << arr[index] << " ";
        index = (index + 1) % size;
    }

    cout << endl;
}
int main ()
 {
     int number, value;

      while (true)
       {
         cout << "1.To Push the value." << endl;
         cout << "2.To See value at fornt of Queue value." << endl;
         cout << "3.To Pop the value." << endl;
         cout << "4.Display complete table." << endl; 

         cin >> number;

         if (number == 1)
         {
            cout << "Insert value.";
            cin >> value; 
             push(value);
         }

         else if (number == 2)
         {
            frontIndex();
         }
         else if (number == 3)
          {
            pop();
          }

          else if (number == 4) 
          {
            display();
          }
       }
       return 0;
 }
