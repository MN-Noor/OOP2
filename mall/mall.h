#pragma once
#include"food.h"
#include"utility.h"
class mall
{
    item *p[12];
public:
void read();
void display();
bool find_by_id();
void lowestprice();
void updateitem();
void savem();
void menu();

};