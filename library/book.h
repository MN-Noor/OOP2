#include<iostream>
#include<string>
#include"student.h"
using namespace std;
class book
{
private:
	int bid, pid;
	string btitle;
	char bstatus;
public:
    book();
	void getinfo();
	void updatepid(int i);
	void showbookinfo();
	string telltitle();
	int tellbid();
	int tellpid();
	char tellstatus();
	void statusissued();
	void statusreturned();
};

