#include "book.h"
#include<iostream>
#include<string>
using namespace std;
book::book()
{
	bstatus='f';
}
void book::getinfo()
{
	cout << "enter id of book\n";
	cin >> bid;
	cin.ignore();
	cout << "enter title\n";
	getline(cin, btitle);
	cin.ignore(-1);
	cout << "Enter status of book (Reserve:r,Available:a,issue:i)" << endl;
	cin >> bstatus;
	if (bstatus=='i')
	{
		cout << "Enter id of person" << endl;
		cin >>pid;
	}


	
}
char book::tellstatus()
{
	return bstatus;
}

void book::showbookinfo()
{
	cout << "ID OF BOOK\t" << bid << endl;
	cout << "TITLE OF BOOK\t" << btitle << endl;
	cout << "   Status: " << bstatus<<endl;
	if(bstatus=='i')
	
	{cout << "   person id: " << pid<<endl;}

    cout << endl;
	cout << "------------------------------\n";
}
string book::telltitle()
{
	return btitle;
}
int book::tellbid()
{
	return bid;
}

int book::tellpid()
{
	return pid;
}
void book:: statusissued()
{
bstatus='r';
}
void book::statusreturned()
{
	bstatus='a';
	pid=0;
}
void book::updatepid(int i)
{
	pid=i;
}

