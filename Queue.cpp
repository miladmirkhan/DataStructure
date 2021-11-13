#include <iostream>
using namespace std;

const int Max_Size = 5;
int Queue[Max_Size];
int rear = -1;
int front = -1;

////////////////////////number of element///////////////////////////////
int number_Of_Element()
{
    return rear - front;
}

////////////////////////////////clear/////////////////////////////////
void Clear()
{
    rear = -1;
    front = -1;
}
////////////////////////////////full////////////////////////////////
bool is_full()
{
    if (rear == Max_Size - 1)
        return true;
    else
        return false;
}
//////////////////////////////empty//////////////////////////////////
bool  is_Empty()
{
    if (rear == -1 || rear == front)

        return true;

    else
        return false;
}

/////////////////////////////enqueue///////////////////////////////////
void enQueue(int item)
{
    if (is_full()) {
        cout << "the queue is full" << endl;
        exit(0);
    }
    else {
        rear++;
        Queue[rear] = item;
    }
}

//////////////////////////////////diqueue//////////////////////////////
int deQueue()
{
    int item;

    if (is_Empty())
    {
        cout << "your queue is empty" << endl;
        exit(0);
    }
    else
    {
        front++;
        item = Queue[front];
    }
    return item;
}

void display() {
    if (rear == -1)
       cout<<"\nQueue is Empty!!!";
    else {
        int i;
        cout<<"\nQueue elements are:\n";
        for (i = rear; i > front; i--)
            cout<< Queue[i]<<" ";
    }
    cout << endl;
}

    int main()
    {
        int element, enqueue;
        cout << "how many element you want : ";
        cin >> element;
        cout << "engueue " << element << " numbers";
        for (int i = 0;i < element;i++) {
            cin >> enqueue;
            enQueue(enqueue);
        }

        cout << "how many element you want to deQueue : ";
        int deQ;
        cin >> deQ;
        for (int i = 0;i < deQ;i++) {
            cout << deQueue() << " ";
        }
        cout << "deQueue element" << endl;

        display();

        cout << "number of elements in queue : " << number_Of_Element();
    }
