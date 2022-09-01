#include"books.h"
#include<iostream>
#include<string>
using namespace std;
void book::get()
{
    cout<<"Enter information\ntitle:";
    cin>>title;
    cout<<"Price:";
    cin>>price;
    cout<<"Quantity:";
    cin>>qan;

}
void book::show()
{
    cout<<"Title:"<<title<<"\nPrice:"<<price<<"\nQuantity"<<qan<<endl;
    }
float book::tellprice()
{
    return price;
} 
float book::tellqan()

{
    return qan;
}