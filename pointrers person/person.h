
#pragma once
#include<iostream>
#include<string>
using namespace std;
class person
{
    string name;
    public:
   virtual void get();
    virtual void show();
    virtual  bool isvalid()=0;

};