#include<iostream>
#include"date.h"
using namespace std;
int main()
{
    date d;
     date();
    date dd1(23,12,2134);
    bool ans;
   char ch;
   do{
 cout<<"\n1:to find  greater date\n2:to find smaller date\n3:to find smaller and equal date\n4:to find equality of two dates\n5:to find non equality of dates"<<endl;
 cout<<"6:to calculates the number of days between two dates\n7:increments date by a day\n8: decrements date by a day\n9:Exit"<<endl;
 cin>>ch;
 if(ch=='1')
 {
     d.get();
     dd1.get();
    ans =d<dd1;
    if(ans==true)
    {
     
       dd1.display();
        cout<<"\nthis 2nd date is greater"<<endl;
    }
    else
    {
      dd1.display();
cout<<"\nthis date is not greater"<<endl;
    }

 }
 if(ch=='2')
 {
    d.get();
     dd1.get();
    ans =d>dd1;
    if(ans==true)
    {
     
       dd1.display();
        cout<<"\nthis 2nd date is smaller"<<endl;
    }
    else
    {
      dd1.display();
cout<<"\nthis 2nd date is not smaller"<<endl;
    }
 }
 else if (ch=='3')
 {
   d.get();
     dd1.get();
    ans =d<=dd1;
    if(ans==true)
    {
     
       dd1.display();
        cout<<"\nthis 2nd date is greater than or equal to first date"<<endl;
    }
    else
    {
      dd1.display();
cout<<"\nthis 2nd date is not greater than or equal to first date"<<endl;
    }
 }
 else if (ch=='4')
 {
   d.get();
     dd1.get();
    ans =d==dd1;
    if(ans==true)
    {
     
       dd1.display();
        cout<<"\nthis 2nd date is  equal to first date"<<endl;
    }
    else
    {
      dd1.display();
cout<<"\nthis 2nd date is not equal to first date"<<endl;
    }
 }
 else if(ch=='5')
 {
   d.get();
     dd1.get();
    ans =d!=dd1;
    if(ans==true)
    {
     
       dd1.display();
        cout<<"\nthis 2nd date not  equal to first date"<<endl;
    }
    else
    {
      dd1.display();
cout<<"\nthis 2nd date is equal to first date"<<endl;
    }
 }
 else if(ch=='6')
 {
   int an;
   d.get();
     dd1.get();
     an=d-dd1;
     cout<<"no of days between two dates="<<an<<endl;

 }
 else if(ch=='7')
 {
   date temp;
     dd1.get();
     temp=dd1++;
     temp.display();
     cout<<"\nafter increment"<<endl;
     dd1.display();

 }
 else if(ch=='8')
{
  date temp;
  dd1.get();
  temp=--dd1;
  cout<<"decremented date"<<endl;
  dd1.display();
}
   }while(ch!='9');
   return 0;
 }


 