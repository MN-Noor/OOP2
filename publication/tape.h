#pragma once
#include"sales.h"
#include"publication2.h"
class tape:public publication2,public sales
{
    float playing_time;
    public:
    void getdata();
    void putdata();

};