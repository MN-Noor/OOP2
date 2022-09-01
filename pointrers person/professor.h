#pragma once
#include"person.h"
class professor:public person
{
    int publications;
    public:
    void get();
    void show();
    bool isvalid();

};