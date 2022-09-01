#include"tape.h"
void tape::getdata()
{
publication2::getdata();
sales::getdata();
cout<<"Enter playing time for tapes in minutes"<<endl;
cin>>playing_time;
}
void tape::putdata()
{
    publication2::putdata();
    sales::putdata();
    cout<<"playing time for tapes in minutes ="<<playing_time;
}