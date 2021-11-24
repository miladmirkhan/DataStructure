#include <iostream>
using namespace std;

struct list
{
	int value;
	list* next;
};
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

list* insertAtF(list* currentList, int num)
{
	list* tempP = new list;
	tempP->value = num;
	tempP->next = currentList;
	return tempP;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

list* insertAtEnd(list* head, int num)
{
	list* r = new list;
	r = head;

	while (r->next != NULL)
		r = r->next;

	list* temp = new list;
	temp->value = num;
	temp->next = NULL;

	r->next = temp;
	return head;
}

///////////////////////////////////////////////////////////////////////////////////////////////

list* insertAfterThisElement(list* head, int num, int afterE)
{
	list* r = head, * temp = new list;

	temp->value = num;/*we make temp value the number we want*/

	while (r != NULL)
	{
		if (r->value == afterE)//fist element
		{
			temp->next = r->next;/*we make r is next to be  temp is next
								 we save r is next*/
			r->next = temp;/*temp will go after r*/
			break;
		}
		r = r->next;/*to go on*/
	}
	return head;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////

int countE(list* head) {
	int count=0;
	if (head == NULL) {
		return 0;
	}
	else {
		while (head!= NULL) {
			count++;
			head = head->next;
		}
		return count;
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////

void display(list* head)
{
	while (head != NULL)
	{
		cout << head -> value << endl;
		head = head -> next;
	}
	cout << endl;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

int headEl(list* head)//for the first element
{
	if (head == NULL) {
		cout << "the list is empty \n";
		exit(0);
	}
	else {
		return head->value;
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////

int tailEl(list* head)//for the last element
{
	if (head == NULL) {
		cout << "the list is empty \n";
		exit(1);
	}
	else {
		while (head->next != NULL) {
			head = head->next;
		}
		return (head->value);
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

list* deleteLast(list* head) {
	list* temp = new list;
	if (head == NULL)
	{
		cout << "Listisempty\n";exit(1);
	}
	 temp = head;

	while (temp->next->next != NULL) {
		temp = temp->next;
	}
	temp->next = NULL;
		
	return head;
}

//////////////////////////////////////////////////////////////////////////////////////////////

list* delete_z(list* head, int z)
{
	list* temp = head;
	list* prev = head;
	while (temp != NULL)
	{
		if (temp->value == z)
		{
			if (temp == head)//ifit’sfirstnode
			{
				head = temp->next;
				break;
			}
			else
			{
				prev->next = temp->next;
				break;
			}
		}
		else
		{
			prev = temp;
			temp = temp->next;
		}
	}
	return head;
}

////////////////////////////////////////////////////////////////////////////////////////////////////

void Reverse(list* head)
{
	if (head == NULL)
	{
		cout << "Listisempty\n";exit(1);
	}
	if (head->next == NULL)
	{
		cout<<("\n", head->value);
		cout<<" ";
		return;
	}
	Reverse(head->next);
	cout<<("\n", head->value);
	cout << " ";
}

///////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	list* head = NULL; //create a new dynamic node(struct)
	head = insertAtF(head, 1);
	head = insertAtF(head, 2);
	head = insertAtF(head, 3);
	head= insertAtF(head, 4);

	head = insertAtEnd(head, 1);
	head = insertAtEnd(head, 2);

	head = deleteF(head);
	display(head);
	
	cout <<"The first element is :"<< headEl(head) << endl;

	cout <<"The last element is :"<< tailEl(head) << endl;

	cout << "the element in linkItList: "<<countE(head);
	int num;int e;
	cin >> num;cin >> e;
	insertAfterThisElement(head,num,e);
	cout << "insert " << num << " after " << e <<endl;
	display(head);

	deleteLast(head);
	display(head);
  
	Reverse(head);
}
	
