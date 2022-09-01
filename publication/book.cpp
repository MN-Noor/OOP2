#include"book.h"
void book::getdata()
{
publication2::getdata();
sales::getdata();
cout<<"Enter no of pages"<<endl;
cin>>no_of_pages;
}
void book::putdata()
{
    publication2::putdata();
    sales::putdata();
    cout<<"no of pages ="<<no_of_pages;
}