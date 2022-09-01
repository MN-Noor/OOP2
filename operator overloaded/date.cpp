#include"date.h"
#include<iostream>
using namespace std;
date::date ()
{
    dd=12;
 mm=2;
yy=1997;
}
date::date(int d,int m,int y)
{   dd=d;
    mm=m;
   yy=y;
   while (isvalid()==false)
 {  if(isvalid()==false)
 
    {
        cout<<"Invalid Entery \nEnter values again"<<endl;
        get();
    }
 } 
}
void date:: get()
{ do
    {
     cout<<"Enter\nday:";
    cin>>dd;
    cout<<"month:";
    cin>>mm;
    cout<<"year:";
    cin>>yy;
if(isvalid()==false)
    {
        cout<<"Invalid Entery \nEnter values again"<<endl;
    }

    } while (isvalid()==false);
}
int date::maxdays(int mm)
{
    if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12)
    {
		return 31;
	}
    else if (mm == 4 || mm  == 6 || mm == 9 || mm == 11)
     {
		return 30;
	}
    else if(mm==2)
    {
        if(yy%4==2)
        {
            return 29;
        }
        else
        {
            return 28;
        }
    }
}
bool date::isvalid()
{
    if((yy>0)&&(yy<9999))
    {
if((mm>0)&&(mm<=12))
{
    if((dd>0)&&(dd<=maxdays(mm)))
    {
        return true;
    }
}
    }
}

void date::display()
{cout<<dd <<":"<<mm<<" :"<<yy;}
bool date::operator<(date dd1)
{
    if(yy<dd1.yy)
{return true;}
else if(yy>dd1.yy)
{
return false;
}
else{
    if(mm<dd1.mm)
    {
        return true;
    }
    else if(mm>dd1.mm)
    {
        return false;
    }
    else 
    {if(dd<dd1.dd)
        {
return true;
        }
        else{
            return false;
        }
    }
}}

bool date::operator<=(date dd1)
{
    if(yy<dd1.yy)
{return true;}
else if(yy>dd1.yy)
{
return false;
}
else{
    if(mm<dd1.mm)
    {
        return true;
    }
    else if(mm>dd1.mm)
    {
        return false;
    }
    else 
    {if(dd<=dd1.dd)
        {
return true;
        }
        else{
            return false;
        }
    }
}


}
bool date::operator>(date dd1)
{
    if(yy>dd1.yy)
{return true;}
else if(yy<dd1.yy)
{
return false;
}
else{
    if(mm>dd1.mm)
    {
        return true;
    }
    else if(mm<dd1.mm)
    {
        return false;
    }
    else 
    {if(dd>dd1.dd)
        {
return true;
        }
        else{
            return false;
        }
    }
}}
bool date::operator==(date dd1)
{
    if(yy==dd1.yy&&mm==dd1.mm&&dd==dd1.dd)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool date::operator!=(date dd1)
{
    if(yy==dd1.yy&&mm==dd1.mm&&dd==dd1.dd)
    {
        return false;
    }
    else
    {
        return true;
    }
}
date date::operator++(int)
{
    date temp;
    temp.dd=dd;
    temp.mm=mm;
    temp.yy=yy;
     dd++;
    if(dd>maxdays(mm))
    {
        mm++;
        dd=1; 
        if(mm>12)
        {
            yy++;
            mm=1;
        }
    }
    return temp;
}
date date ::operator--()
{ date temp;
    
     dd--;
    if(dd<1)
    {
        mm--;
        if(mm<1)
        {
            yy--;
            mm=12;
            
        }
         dd=maxdays(mm);
    }
    temp.dd=dd;
    temp.mm=mm;
    temp.yy=yy;
    return temp;
}
int date ::operator-(date d2)
{
   unsigned int dy;
    int days=0;
    int i;
    if(dd>=d2.dd)
    {
 days+=dd-d2.dd;
    }
    else{
        days+=d2.dd-dd;
    }
    if(mm>=d2.mm)
    {
 for( i=d2.mm;i<mm;i++)
 {
     days+=maxdays(i);
 }
 }
 else
 {
      for(i=mm;i<d2.mm;i++)

 {
     days+=maxdays(i);
 }
 

 }
 if(yy>=d2.yy)
    {
 dy=yy-d2.yy;
    }
    else{
        dy=d2.yy-yy;
    }
 
 days+=dy*365;
 }
