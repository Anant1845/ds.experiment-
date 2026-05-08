#include <iostream>
using namespace std;

#define MAX 100

int queueArr[MAX];
int front = -1;
int rear = -1;

// Enqueue Operation
void enqueue(int value)
{
    if (rear == MAX - 1)
    {
        cout << "Queue Overflow" << endl;
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }

        rear++;
        queueArr[rear] = value;

        cout << value << " inserted into queue" << endl;
    }
}

// Dequeue Operation
void dequeue()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue Underflow" << endl;
    }
    else
    {
        cout << queueArr[front] << " deleted from queue" << endl;
        front++;
    }
}

// Peek Operation
void peek()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Front element is: " << queueArr[front] << endl;
    }
}

// Display Queue
void display()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue elements are: ";

        for (int i = front; i <= rear; i++)
        {
            cout << queueArr[i] << " ";
        }

        cout << endl;
    }
}

int main()
{
    int n, value, choice;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter queue elements:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> value;
        enqueue(value);
    }

    do
    {
        cout << "\n--- Queue Operations ---" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                cout << "Program Ended" << endl;
                break;

            default:
                cout << "Invalid Choice" << endl;
        }

    } while (choice != 5);

    return 0;
}
