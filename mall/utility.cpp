#include"utility.h"
#include<iostream>
using namespace std;
void utility::show()
{
    item::show();
    cout<<"discout:"<<discount<<"%"<<endl;
}
void utility::get()
{
    cout<<"Enter food item details"<<endl;
    item::get();
    cout<<"Discount:";
    cin>>discount;
}