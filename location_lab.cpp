/*
Locationa[i][j]=Base_Address+((i*c)+j)*size of array type
write a program to do 1/read two diemntional size 3 w 4 2/print array matrix element 3/write a functin to find and return location
of a specified elemnt usig row wise methos base address=400
*/
#include <iostream>
using namespace std;
void location(int i, int j, int r, int ba);
int main() {
	short a[3][4];

	for (int i = 0;i < 3;i++)
		for (int j = 0;j < 4;j++)

			cin >> a[i][j];
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 4;j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	int i ,j;
	cout << "enter the i number" << endl;
	cin >> i;
	cout << "enter the j number" << endl;
	cin >> j;

	location(i, j, 4, 400);
	return 0;
}
void location(int i, int j, int c, int ba) {
	//colomnways
	cout << location << endl;
	cout << (ba + ((i * 4) + j) * 4);
	/*
	rowways
	cout << (ba + ((j * 3) + i) * 4);
	*/
}
