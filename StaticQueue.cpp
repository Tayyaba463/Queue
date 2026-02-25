#include <iostream>
using namespace std;

#define size 10

int rear = 0;
int front = 0;
int currentsize = 0;
int arr[size];

void push (int value)
{
    if (currentsize == size)
    {
        cout << "Queue is fulled." << endl;
        return;
    }

  arr[rear] = value;
  rear++;
  currentsize++;

}

void pop ()
{
    if (currentsize == 0)
    {
        cout << "Queue is empty." << endl;
        return;
    }

    arr[front];
    front++;
    currentsize--;

}

void display () 
{
    int index = front;
    for (int i = 0; i < currentsize; i++)
    {
        cout << arr[index] << "  ";
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
         cout << "2.To Pop the value." << endl;
         cout << "3.Display complete table." << endl; 
         cout << "4. Exit." << endl;

         cin >> number;

         if (number == 1)
         {
            cout << "Insert value.";
            cin >> value; 
             push(value);
         }

         else if (number == 2)
          {
            pop();
          }

          else if (number == 3) 
          {
            display();
          }
          else if (number == 4)
          {
            cout << " Exited Successfully." << endl;
          }
          else  {
             cout << "Enter Correct Choice." << endl;
          }
       }
        
       return 0;
 }
