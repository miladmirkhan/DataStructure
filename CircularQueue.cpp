#include <iostream>
using namespace std;

int const MaxSize = 5;
int circularQueue[MaxSize];
int rear = -1;
int front = -1;

bool empty() {
    if (rear == -1)
        return true;
    else return false;
}

bool full() {
    if ((front == 0 && rear == MaxSize - 1) || (front == rear + 1))
        return true;
    else
        return false;
}

void enqueue(int el) {
    if (full()) {
        cout << "the queue is full." << endl;
        exit(0);
    }
    else {
        if (rear == -1) {
            rear = 0;
            front = 0;
        }
        else if (rear == MaxSize - 1)
            rear = 0;
        else
            rear++;
        circularQueue[rear] = el;
    }
}
int dequeue()
{
    int temp = 0;
    if (empty()) {
        cout << "the Queue is empty." << endl;
        exit(0);
                 }
    else 
    {
        temp = circularQueue[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if (front == MaxSize - 1) {
            front = 0;
        }
        else {

            front++;
        }
        return temp;
 
    }
}

int numberOfElement()
{
    if (empty()) {
        return 0;
    }

    else if (full()) {
        return MaxSize;
    }

    else {
        if (front > rear) {
            return(MaxSize - front + rear + 1);
                          }
        else {
            return (rear - front + 1);
             }
         }
}

int numberOfspace() {
      return MaxSize - numberOfElement();
}
int index(int i) {
    if (empty()) {
        cout << "the queue is empty\n";
        exit(0);
    }
    return circularQueue[i];
}

int main()
{
    int numOp, Op, enQnum, enQ, deQnum, deq;
    cout << "enter the number of opratins: ";
    cin >> numOp;

    cout << "Oprations" << endl;
    cout << "1: Enqueue" << endl;
    cout << "2: Dequeue" << endl;
    cout << "3: Full" << endl;
    cout << "4: Empty" << endl;
    cout << "5: number of Elelent" << endl;
    cout << "6: number of Space" << endl;
    cout << "7: index" << endl;
    cout << "8: first" << endl;
    cout << "9: last" << endl;

    for (int i = 0; i < numOp; i++) {
        cout << "select the opration: " << endl;
        cin >> Op;
        switch (Op)
        {
        case 1: {
            cout << "how many element you want to enqueue: ";
            cin >> enQnum;
            for (int i = 0; i < enQnum; i++) {
                cin >> enQ;
                enqueue(enQ);
            }
            break;
        }

        case 2: {
            cout << "how many element you want to dequeue: ";
            cin >> deQnum;
            for (int i = 0; i < deQnum; i++) {
                cout << dequeue() << " ";
            }
            cout << "dequeued" << endl;
            break;
        }
        case 3: {
            if (full()) {
                cout << "the Queue is full" << endl;
                break;
            }}
        case 4: {
            if (empty()) {
                cout << "the Queue is empty" << endl;
                break;
            }
        }
        case 5: {
            cout << "number of element is:" << numberOfElement() << endl;
            break;
        }
        case 6: {
            cout << "the number of space is: "<< numberOfspace() <<endl;
            break;}

        case 7: {
            int numEn;
            cout << "enter the index: ";
            cin >> numEn;
            cout << "\n enter the index: " << index(numEn);
            break;
        }
        case 8: {
            cout << "the first element" << firstElement()<<endl;
            break;
        }
        case 9: {
            cout << "the last element" << lastElement()<<endl;
            break;
        }
    }
    }
}
