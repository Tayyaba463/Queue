#include <iostream>
using namespace std;

#define totalcapacity 10

int front = 0;
int arr[totalcapacity];
int rear = 0;
int countsize = 0;


void EnQueue (int value)
{
    if (front == totalcapacity -1)
    {
        cout << "Queue Overflow. "<< endl;
        return;
    }

    
    arr[rear] = value;
    rear++;
    countsize++;
}

void DeQueue ()
{
    if (front == -1)
    {
        cout << "Queue is empty. " << endl;
        return;
    }

   arr[front++];
   countsize--;
}

void display ()
{
    int index = front;
    for (int i = 0; i < countsize; i++)
    {
        cout << "REAR -> " << arr[index] << endl;
        index = (index + 1) % totalcapacity;
     }
}


int main()
 { 

    int number, value;

     while (true)
     {
        cout << "1.EnQueue Value." << endl;
        cout << "2.DeQueue Value." << endl;
        cout << "3.Display All." << endl;
        cout << "4.Exit." << endl;

        cin >> number;

        if (number == 1)
        {
          cout << "Top the value.";
          cin >> value;
           EnQueue(value);
        }
        else if (number == 2)
        {
            DeQueue();
        }
       else  if (number == 3)
        {
            display();
        }
        else if (number == 4)
        {
            cout << "Exit Successfully from the system." << endl;
            break;
        }
        else {
            cout << "Enter Correct Choice." << endl;
        }
     }
    return 0;
 }
