// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct student {
	string name;
	int stage;
	double id;
};

void getinfo(student[])
{
	student s[5];
	for (int i = 0;i < (sizeof s / sizeof s[0]);i++)
	{
		cout << "enter the " << i + 1 << " Student info: ( name, stage,id )." << endl;
		cin >> s[i].name;
		cin >> s[i].stage;
		cin >> s[i].id;
	}
};

void displayinfo(student[])
{
	student s[5];
	for (int i = 0;sizeof s / sizeof s[0];i++)
	{
		cout << "your " << i << " student info: " << s[i].name << s[i].stage << s[i].id << endl;
	}
};

int main()
{
	student s[5];

	getinfo(s);
	displayinfo(s);
	return 0;
}

