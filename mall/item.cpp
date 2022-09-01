#include"item.h"
#include<iostream>
using namespace std;
item::item()
{
    string aymen;
    product_id=4567;
     price=56;

}
item::item(string n,int pid,int p)
{
    name=n;
    product_id=pid;
price=p;
}
void item::show()
{
    
    cout<<"Name:"<<name<<endl;
    cout<<"Product ID:"<<product_id<<endl;
    cout<<"Price:"<<price<<endl;
}
void item::get()
{
    {
       cout<<"Enter your new product details"<<endl;
       cout<<"Name:";
       cin>>name;
       cout<<"Product_id:";
       cin>>product_id;
       cout<<"Price:";
       cin>>price;
      }
}