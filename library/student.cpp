#include "student.h"
#include<iostream>
#include<string>
using namespace std;
void student::get()
{
	cout << "enter name\n";
	getline(cin, sname);
	cin.ignore(-1);
	cout << "enter program\n";
	getline(cin, sprogram);
	cin.ignore(-1);
	cout << "enter ID\n";
	cin >> sid;
	cin.ignore();
	cout << endl;
	cout << "------------------------------\n";
}

void student::showstudentdata()
{
	cout << "NAME OF STUDENT\t" << sname << endl;
	cout << "STUDENT'S PROGRAM\t" << sprogram << endl;
	cout << "ID OF STUDENT\t" << sid << endl;
	cout << endl;
	cout << "------------------------------\n";
}

