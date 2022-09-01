#include"date.h"
#include<iostream>
using namespace std;
void date1::getdata()
{
    cout<<"Enter day"<<endl;
    cin>>day;
    cout<<"Enter mmonth"<<endl;
    cin>>month;
    cout<<"Enter year"<<endl;
    cin>>year;
}
void date1::putdata()
{
    cout<<day<<"\n"<<month<<"\n"<<year<<"\n";
}