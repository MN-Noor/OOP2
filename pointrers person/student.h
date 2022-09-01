#pragma once
#include"person.h"
class student:public person
{
    float gpa;
    public:
    void get();
    void show();
    bool isvalid();

};