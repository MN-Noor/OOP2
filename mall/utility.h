#include"item.h"
#include<iostream>
using namespace std;
class utility:public item
{int discount;
public:
 utility():item()
    {
        discount=45;
    }
    utility(string n,int pid,int p,int dis):item(n,pid,p)

    {
discount=dis;
    }
void show();
string save()
{
    string l1;
    l1="u:"+item::save()+":"+to_string(discount);
    return l1;
}
void get();


};