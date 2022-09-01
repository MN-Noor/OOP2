#pragma once
#include"sales.h"
#include"publication2.h"
class book:public publication2,public sales
{
    float no_of_pages;
  public:
    void getdata();
    void putdata();

};