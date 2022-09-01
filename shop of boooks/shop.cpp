#include"shop.h"
#include<iostream>
#include<string>
using namespace std;
void shop::readinfo()
{
    cout<<"Enter values of all the books"<<endl;
for(int i=0;i<=2;i++)
{
    b[i].get();

}
}
void shop::displayinfo()
{
    for(int i=0;i<=2;i++)
    {
        b[i].show();
    }
}
void shop::totalprice()
{
    float sum=0;
    for(int i=0;i<=2;i++)
    {
        sum+=b[i].tellprice()*b[i].tellqan();
    }
    cout<<"total price"<<sum<<endl;
}
void shop::highestprice()
{
    int p=0;
     int max;
     max=b[0].tellprice();
    for(int i=1;i<=2;i++)
    {
        if(max<b[i].tellprice())
        {
            max=b[i].tellprice();
p=i;
        }
    }
    b[p].show();

}
void shop::menu()
{
cout<<"Enter respective function\n1:to display all books\n2:to display total price\n3:to display highest price\n4:exit"<<endl;

}

