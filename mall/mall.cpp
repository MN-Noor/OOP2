#include"mall.h"
#include<fstream>
#include<iostream>
using namespace std;
void mall::read()
{
    string s1,s2,s3,s4,s5;
    
    ifstream file1("file.txt");
    
for(int i=0;i<12;i++)
{
getline(file1,s1,':');
getline(file1,s2,':');
getline(file1,s3,':');
getline(file1,s4,':');
getline(file1,s5);
if(s1[0]=='f')
{
    p[i]=new food(s3,stoi(s2),stoi(s4),s5);


}
else if(s1[0]=='u')
{
    p[i]=new utility(s3,stoi(s2),stoi(s4),stoi(s5));

}



}
}
void mall::display()
{
    for(int i=0;i<12;i++)
    {
        p[i]->show();
    }

}
bool mall::find_by_id()
{
    int id;
    cout<<"Enter the id of product which you want to search:";
    cin>>id;
    for(int i=0;i<12;i++)
    {
        if(p[i]->tellid()==id)
        {
p[i]->show();
return true;
        }
    }
    cout<<"product Not found"<<endl;
    return false;
}
void mall::lowestprice()
{
     int pos;
    int lowprice=p[0]->tellprice();
     for(int i=0;i<12;i++)
     {
         if(lowprice>=p[i]->tellprice())
         {
             lowprice=p[i]->tellprice();
             pos=i;
         }
     }
    
     p[pos]->show(); 
}
void mall::updateitem()
{
  int id; 
  bool found=false;
  int pos; 
cout<<"Enter the ID which you want to update"<<endl;
cin>>id;
for(int i=0;i<12&&found==false;i++)
{
if(id==p[i]->tellid())
{
pos=i;
found=true;
  }
}
if(found==true)
{
    p[pos]->show();
    cout<<"This is the information of product you want to replace"<<endl;
    cout<<"Enteer the information of data of product from which you want to replace this item"<<endl;
    p[pos]->get();
}
else if(found==false)
{
    cout<<" no product found"<<endl;
}  
}
void mall::savem()
{
 ofstream file1("file.txt");
 for(int i=0;i<12;i++)
{ 
   
   file1<<p[i]->save()<<endl;
   
}
 file1.close(); 

}
void mall::menu()
{
    cout<<"Enter\n1:Find an item  by product_id\n2:Update information of Utility_Items and Food_Items\n3:Display the data for all the Utility_Items and Food_Items"<<endl;
    cout<<"4:Display information of Item having minimum price\n5:to save updated info\n6:Exit"<<endl;
}
