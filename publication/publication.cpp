#include"publication.h"
void publication::getdata()
{
    cout<<"Enter title";
    cin>>title;
    cout<<"Enter Price";
    cin>>price;
}
void publication::putdata()
{
    cout<<title<<"\n"<<price;
}