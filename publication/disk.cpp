#include"disk.h"
void disk::getdata()
{
    publication::getdata();

    cout<<"Enter tYpe of disk:\n";
    cin>>type;
}
void disk::putdata()
{
    publication::putdata();
    
    cout<<type<<endl;
}
