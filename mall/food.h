#pragma once
#include"item.h"

#include<iostream>
using namespace std;
class food:public item
{
    string date;
    public:
    food():item()
    {
        date="5/7/2341";
    }
    food(string n,int pid,int p,string d):item(n,pid,p)

    {
date=d;
    }
   
    void show();
   
    void get();
    string save()
    {
       string line1;
       string line2=item::save();
       line1="f:"+line2+":"+date;
       return line1;

    }
   
};
