//write a program to take 5 numbers from user count and display number of passed and fail student

#include <iostream>
using namespace std;
int main()
{
    cout << "enter 5 student marks: " << endl;

    int a, pass = 0, fail = 0, sump = 0, sumf = 0;

    for (int i = 0;i < 5;i++)
    {
        cin >> a;
        if (a > 50) {
            pass++;
            sump = (a + sump);
        }
        else
            fail++;
        sumf = a + sumf;
    }
    int pased = 0;
    int faied = 0;
    cout << "pass student" << pass << endl;
    pased = (sump / pass);
    cout << "avarage of pass" << pased << endl;

    cout << "fail student" << fail << endl;
    faied = (sumf / fail);
    cout << "avarage of pass" << faied << endl;
}
