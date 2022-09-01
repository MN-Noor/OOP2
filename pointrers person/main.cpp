#include<iostream>
#include"student.h"
#include"professor.h"
using namespace std;
int main()
{
    char choice;
    person *p1[8];
    for(int i=0;i<8;i++)
    {
        cout<<"Enter choice which object do you want to create\n enter s for student\n enter p for professor"<<endl;
    cin>>choice;
    if(choice=='s')
    {
        p1[i]=new student;
    }
    if(choice=='p')
    {
        p1[i]=new professor;
    }
    p1[i]->get();
    }
    for(int i=0;i<8;i++)
    {
        p1[i]->isvalid();
        p1[i]->show();
    }

    return 0;
}