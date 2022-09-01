#include<iostream>
#include<string>
#include"list.h"

using namespace std;
int main()
{
    char ch;
    list l;
    char ch2;
    bool r;
   
do
{

 l.menu();
 cin>>ch;
 if (ch=='1')
 {
   cout<<"1:book record\n2:student record"<<endl;
   cin>>ch2;
   if(ch2=='1')
   {
       l.getbookinfo();
   }
   else if(ch2=='2')
   {
        l.getstudentinfo();
   }
 }
 else if (ch=='2')
 {
     l.issue();
      
 }
 else if(ch=='3')
 {
   l.returned();
  
 }
 else if(ch=='4')
 {
    l.findbytitle();
 }
 else if(ch=='5')
 {
    l.reservedbooks();

 }
 else if(ch=='6')
 {
   l.finbyid();
 }

}while(ch!='7');

    return 0;
}
 
