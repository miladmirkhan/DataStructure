#include <iostream>
using namespace std;

const int maxsize = 5;
int stack[maxsize];
int top = -1;

//////////////////////////////////////////////////////////////////////////////////////
int numOfElement()
{
	return top + 1;
}

//////////////////////////////////////////////////////////////////////////////////////
bool full()
{
	if (top == maxsize - 1)
		return true;
	else
		return false;
}

//////////////////////////////////////////////////////////////////////////////////////
bool empty()
{
	if (top == -1)
		return true;
	else
		return false;
}

//////////////////////////////////////////////////////////////////////////////////////
int pop()
{
	int item;
	if (empty()) {
		cout << "This stack is empty" << endl;
		exit(0);
	}
	else
	{
		item = stack[top];
		top--;
	}
	return item;
}

//////////////////////////////////////////////////////////////////////////////////////
void push(int num)
{
	if (full())
	{
		cout << "The stuck is full." << endl;
		exit(0);
	}
	else
	{
		top++;
		stack[top] = num;
	}
}

//////////////////////////////////////////////////////////////////////////////////////
void clear()
{
	top = -1;
}

//////////////////////////////////////////////////////////////////////////////////////
int stackindex(int num) {
	if (empty()) {
		cout << "stack is empty;";
		exit(0);
	}
	else
		for (int i = top;i >= 0;i--) {
			if (stack[i] == num)
				return i ;
		}
}

//////////////////////////////////////////////////////////////////////////////////////
int topElement()
{
	return stack[top];
}

//////////////////////////////////////////////////////////////////////////////////////
int index(int num) {
	if (empty()) {
		cout << "stack is empty;";
		exit(0);
	}
	else
		return stack[num];
}

//////////////////////////////////////////////////////////////////////////////////////
void display() {
	if (empty()) {
		cout << "stack is empty;";
		exit(0);
	}
	cout << "the value in the stack are ";
	for (int i = top;i >= 0;i--) {
		cout << stack[i] << " ";
	}
	cout << endl;
}

//////////////////////////////////////////////////////////////////////////////////////
int numElement(int item) {
	int count = 0;
	for (int i = top;i >= 0;i--) {
		if (stack[i] == item) {
			count++;
		}
	}
	return count;
}
//////////////////////////////////////////////////////////////////////////////////////
int main()
{
	int idOfOpration;int numOfCases;
	cout << "enter the num of case(s): ";cin >> numOfCases;
	cout << " the id of oporation: \n1:push \n 2:pop \n 3:empty \n 4:full \n 5:Number Of element \n 6:Clear the stack \n 7:find the number index \n 8: index of stack\n 9:display" << endl <<  " 10: top Element\n 11:number of repeted\n 0:exit \n";
	for (int i = 0;i < numOfCases;i++) {

		cout << "enter the id of oporation: ";
		cin >> idOfOpration;
		switch (idOfOpration)
		{
		case 1://push
		{
			cout << "how many opration you want to push: ";
			int pushNum;
			cin >> pushNum;
			int num;
			for (int i = 0;i < pushNum;i++)
			{
				cin >> num;
				push(num);
			}
			break;
		}
		case 2://pop
		{
			cout << "how many opration you want to pop: ";
			int el;
			cin >> el;
			int num12;
			for (int i = 0;i < el;i++)
			{
				cout << pop() << " ";
			}
			cout << "poped" << endl;
			break;
		}
		case 3://empty
		{
			if (empty()) {
				cout << "the stack is empty." << endl;break;
			}
			else {
				cout << "the stack is not empty." << endl;
				break;
			}
		}
		case 4://full
		{
			if (full()) {
				cout << "the stack is full."<<endl;break;
			}
			else {
				cout << "the stack is not full."<<endl;
				break;
			}
		}
		case 5://numofelement
		{
			cout << "the number of element : " << numOfElement()<<endl;
			break;
		}


		case 6://clear
		{
			clear();
			cout << "the stack is clear" << endl;
			break;
		}
		case 7://find the index
		{
			int ind;
			cout << "enter a number: ";
			cin >> ind;
			cout << endl << "the index is :"<< stackindex(ind)<<endl;
			break;
		}
		case 8://find the number
		{
			cout << "enter stack index\n";
			int inde;cin >> inde;
			cout <<"the number is : " << index(inde) << endl;
			break;
		}
		case 9://display
		{
			display();
			break;
		}
		case 10://top element
		{
			cout << "the top element :" << topElement()<<endl;
			break;
		}
		case 11://repeated element
		{
			int repeat;
			cout << "enter the number you want : ";
			cin >> repeat;
			cout << numElement(repeat) << " times the number is repeted. \n";
		}
		case 0: //exit
		{
			exit(0);
		}

		}
		
	}
}

