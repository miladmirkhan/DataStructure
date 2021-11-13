#include <iostream>
using namespace std;

int small(int arr[]);
int main()
{
	int arr[5];
	
	for (int i = 0;i < 5;i++)
	{
		cin >> arr[i];
	}
	
	for (int i = 0;i < 5;i++)
	{
		cout<< arr[i]<<" ";
	}
	cout << endl;
	cout<<small(arr)<<endl<< sizeof arr / sizeof arr[0];
	
}

int small(int arr[]) {

	for (int i = 1;i < 5;i++)
	{
		if (arr[0] > arr[i])
		{
			arr[0] = arr[i];
		}
	}
	return arr[0];
}
