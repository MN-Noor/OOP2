#include<iostream>
#include<string>
#include"books.h"
#include"shop.h"
using namespace std;
int main()
{
    shop s;
    int ch;
     s.readinfo();
   
   do{
        s.menu();
    cin>>ch;
    if(ch==1)
  {
   s.displayinfo();
}
if(ch==2)
{
s.totalprice();
}
if(ch==3)
 {
     s.highestprice();
 }
   }while (ch!=4);
   

    return 0;
}
