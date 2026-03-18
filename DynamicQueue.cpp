#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* Queue = NULL;

void EnQueue (int value)
{
    Node *temp;
    temp = (Node*) malloc (sizeof(Node));
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

void DeQueue ()
{
    if (Queue == NULL)
    {
        cout << "Queue is empty." << endl;
        return;
    }

    Node *current = Queue;
    Queue = Queue->next;
        free(current);
        cout << "Value DeQueue." << endl;
   
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
         cout << "1.EnQueue value." << endl;
         cout << "2.DeQueue value." << endl;
         cout << "3.Display." << endl; 
         cout << "4.Exit." << endl;

         cin >> number;

         if (number == 1)
         {
            cout << "Insert value.";
            cin >> value; 
            EnQueue (value);
         }

         else if (number == 2)
          {
            DeQueue ();
          }

          else if (number == 3) 
          {
            display();
          }
          else if (number == 4)
          {
            cout << "Exited Successfully." << endl;
          }
           else {
          cout << "Enter Correct Choice." << endl; 
         }
       }
       return 0;
 }





