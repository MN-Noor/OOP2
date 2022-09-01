#ifndef SHOP_H
#define SHOP_H
#include"books.h"
#include<string>
using namespace std;

class shop
{
  
public:
  book b[2];
void readinfo();
void displayinfo();
void totalprice();
void highestprice();
void menu();
};


#endif