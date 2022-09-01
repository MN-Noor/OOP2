#include"sales.h"
#include<iostream>
using namespace std;
void sales::getdata()
{
    cout<<"enter sales for\n"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<"month"<<i+1<<endl;
        cin>>s[i];
    }
}
void sales::putdata()
{
     cout<<"sales for "<<endl;
    for(int i=0;i<3;i++)
    {
       
        cout<<"month"<<i+1<<"=";
        cout<<s[i];

    }

}