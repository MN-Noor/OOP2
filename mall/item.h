#pragma once
#include<iostream>
#include<string>
using namespace std;
class item
{
    string name;
    int product_id;
    int price;
    
    public:
    item();
    item(string n,int pid,int p);
   virtual void show();
   int tellid()
   {
       return product_id;
   }
   int tellprice()
   {
       return price;
   }
   virtual void get();
   virtual string save()
   {
       
       string line;
       line=to_string(product_id)+":"+name+":"+to_string(price);
      return line;
   }
   
    

};
