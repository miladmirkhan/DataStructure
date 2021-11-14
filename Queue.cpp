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
        printf("\nQueue is Empty!!!");
    else {
        int i;
        cout<<"\nQueue elements are:\n";
        for (i = rear; i > front; i--)
            cout<< Queue[i]<<" ";
    }
    cout << endl;
}

int emptySpace()
{
    return Max_Size - number_Of_Element();
}

    int main()
    {
        int opNum;
        cout << "how many opration you want : ";cin >> opNum;
        cout << " 1:enqueue \n 2:dequeue \n 3:isEmpty \n 4:isFull \n 5:disply \n 6:emptySpace \n 7:numOfElement \n 0:end the opration \n";
        {
            for (int i = 0;i < opNum;i++)
            {
                int op;
            cout << "Enter the opration: ";
            cin >> op;
            cout << endl;
            switch (op) {
            case 1: {
                int element, enqueue;
                cout << "how many element you want : ";
                cin >> element;
                cout << "engueue the " << element << " number :\n";
                for (int i = 0;i < element;i++) {
                    cin >> enqueue;
                    enQueue(enqueue);
                   } 
                break;
                
            }
            case 2: {
                cout << "how many element you want to deQueue : ";
                int deQ;
                cin >> deQ;
                for (int i = 0;i < deQ;i++) {
                    cout << deQueue() << " ";
                }
                cout << "deQueue element" << endl;
                break;
            }

            case 3: {
                if (is_Empty()) {
                    cout << "the queue is empty \n";
                    break;
                }
                else {
                    cout << "the queue is not empty \n";
                    break;
                }
            }
            case 4: {
                if (is_full()){
                    cout << "the queue is full \n";
                break;}
                else{
                    cout << "the queue is not full \n";
                break;}
            }
            case 5: {
                display();
                break;
            }
            case 6: {
                cout << "number of empty space in queue : " << emptySpace() << "\n";
                break;
            }
            case 7: {
                cout << "number of elements in queue : " << number_Of_Element() << endl;
                break;
            }
            case 0: {

                exit(0);
            }
            }
        }
        }
          
    }
