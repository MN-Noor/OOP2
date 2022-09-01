#include<iostream>
#include"student.h"
#include"person.h"
using namespace std;
void student::get()
{
person::get();
cout<<"Enter GPA"<<endl;
cin>>gpa;
}
void student::show()
{
    person::show();
    cout<<"GPA:"<<gpa;
}
bool student::isvalid()
{
    if(gpa>3.8)
    {
        cout<<"he is outstanding";
        return true;
    }
    else 
    {
         cout<<"he is not outstanding";
        return false;
    }
}
