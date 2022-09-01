#include<iostream>
#include<string>
#include"book.h"
using namespace std;
class list
{
private:
	book b[2];
	student s[2];
public:
void menu();
	void getbookinfo();
	void getstudentinfo();
	void issue();
	void returned();
	void finbyid();
	void findbytitle();
	void reservedbooks();
};

