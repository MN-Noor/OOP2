#include "list.h"
#include<iostream>
#include<string>
using namespace std;
void list::menu()
{
	cout << "Enter\n1-add\n2-issue book\n3-return book\n4-find book by title\n5-reserved book record\n6-display book by person id issued to him\n7:exit" << endl;
}
void list::getbookinfo()
{
	for (int i = 0; i <2; i++)
	{
		b[i].getinfo();
	}
}
void list::getstudentinfo()
{
	for (int i = 0; i < 2; i++)
	{
		s[i].get();
	}
	cout << endl;
	cout << "------------------------------\n";
}


void list::issue()
{
	int ib, ip;
	bool found = false;
	cout << "Enter id of book" << endl;
	cin >> ib;
	for (int i = 0; i < 2 && found==false; i++)
	{
		if (ib== b[i].tellbid())
		{
			
			if (b[i].tellstatus() == 'a')
			{
				cout << "enter person id" << endl;
				cin >> ip;
				b[i].updatepid(ip);
				cout << "book has been issued" << endl;
				b[i].statusissued();
				
			}
			else if(b[i].tellstatus()=='i')
			{
				cout<<"This book had been issued to someone else"<<endl;
			}
			else if(b[i].tellstatus()=='r')
			{
				cout<<"you cannot issue this book this book is reserved"<<endl;
			}
			found = true;
			
		}
	}
	if (found == false)
	{
		cout << "no book found" << endl;
	}


}
void list::returned()
{
	int bid;
	bool found = false;
	cout << "Enter id of book" << endl;
	cin >> bid;
	for (int i = 0; i < 2&&found==false; i++)
	{
		if (bid == b[i].tellbid())
		{
			found = true;
			if (b[i].tellstatus() == 'i')
			{
				
				cout<<"This book has been returned"<<endl;
				b[i].statusreturned();
		   }
			else
			{
				cout << "book hasnot been issued" << endl;
			}
		}
	}
	if (found == false)
	{
		cout << "book is not found" << endl;
	}

}
void list::finbyid()
{

int id;
	bool found = false;
	cout << "Enter id of person" << endl;
	cin >>id ;
	for (int i = 0; i < 2 && found == false; i++)
	{
		if (id == b[i].tellpid())
		{
			found = true;
			b[i].showbookinfo();
		}
	}
	if (found == false)
	{
		cout << "id not match" << endl;
	}
}
void list::findbytitle()
{
	string t;
	bool found = false;
	cout << "Enter title of book" << endl;
	cin >> t;
	for (int i = 0; i < 2 && found == false; i++)
	{
		if (t == b[i].telltitle())
		{
			found=true;
				b[i].showbookinfo();

		}
	}
	if (found == false)
	{
		cout << "no book found" << endl;
	}
}
void list::reservedbooks()
{
	bool found = false;
	for (int i = 0; i < 2; i++)
	{
		if ( b[i].tellstatus()=='r')
		{
			found = true;
			b[i].showbookinfo();
		}
	}
	if (found == false)
	{
		cout << "no book are reserved" << endl;
	}
}