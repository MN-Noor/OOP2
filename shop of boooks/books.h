#ifndef BOOKS_H
#define BOOKS_H
#include<string>
using namespace std;
class book
{
    string title;
    float price;
    float qan;
   
    public:
    void get();
    void show();
    float tellprice();
    float tellqan();





};

#endif