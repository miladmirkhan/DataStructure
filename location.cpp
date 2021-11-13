
#include <iostream>
using namespace std;

struct Student {
	int stage;
	int age;
	

};

int function(int base, int structsize, int location);
int main()
{
	Student str[3];

	for (int i = 0; i < 3; i++)
	{
			cout << "Enter Age for Student " << i + 1 << endl;
			cin >> str[i].age;
			cout << "Enter stage for Student " << i + 1 << endl;
			cin >> str[i].stage;
	}

	for (int i = 0; i < 3; i++)
	{
		if (str[i].stage==1) {
			cout << "This Students age is " << str[i].age << " and its stage is " << str[i].stage << endl;
		
		}

	}

	int base = 400;
	int structsize = 8;
	int location;
	cout << "What Location do you want??(how many struct you have)" << endl;
	cin >> location;

	
	cout << function(base, structsize, location) << endl;

}
int function(int base, int structsize,int location) {


	int loc = base + (location * structsize);

		return loc;

}
