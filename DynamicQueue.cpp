#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* Queue = NULL;

void push (int value)
{
    Node *temp = new Node;
    temp->data = value;
    temp->next = NULL;
    if (Queue == NULL)
    {
        Queue = temp;
    }
else {

    Node *current = Queue;
    while (current->next != NULL)
    {
       current = current->next;
    }
    current->next = temp;
 }
}

void pop ()
{
    if (Queue == NULL)
    {
        cout << "Queue is empty." << endl;
        return;
    }

    Node *current = Queue;
    Queue = Queue->next;
        free(current);
        cout << "Value has been deleted." << endl;
   
}

void display()
{
    if (Queue == NULL)
    {
        cout << "Queue is empty." << endl;
        return;
    }

    Node* current = Queue;
    while (current != NULL)
    {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}


int main ()
 {
     int number, value;

      while (true)
       {
         cout << "1.To Push the value." << endl;
         cout << "2.To Pop the value." << endl;
         cout << "3.Display complete table." << endl; 
         cout << "4.Exit." << endl;

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
            cout << "Exited Successfully." << endl;
          }
          cout << "Enter Wrong Choice." << endl; 
       }
       return 0;
 }



