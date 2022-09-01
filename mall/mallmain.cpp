#include"mall.h"
#include<fstream>
#include<iostream>
#include<string>
using namespace std;
int main()
{mall m;
char ch;
char ch2;
m.read();
do{
    m.menu();
    cin>>ch;
    if(ch=='1')
    {
        m.find_by_id();
    }
    else if(ch=='2')
    {
        m.updateitem();
    }
    else if(ch=='3')
    {
        m.display();
    }
    else if(ch=='4')
    {
        m.lowestprice();
    }
    else if(ch=='5')
    {
        cout<<"Exiting......\nSave changes you have made in file"<<endl;
    }
    
 else{
        cout<<"Invalid Choice"<<endl;
    }


    
}while(ch!='5');
 if (ch='5')
    {
        cout<<"Do you want to save changes you have made in Data\ny/n"<<endl;
         cin>>ch2;
         if(ch2=='y')
         {
           m.savem();

       }
          else if(ch2=='n')
       {
       cout<<"The changes you have made Were discarded"<<endl;
        }
       else
       {cout<<"Invalid Choice"<<endl;}
    }


    return 0;
}

