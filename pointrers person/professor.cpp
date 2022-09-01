#include"professor.h"
void professor::get()
{
    person::get();
    cout<<"Enter no of publications"<<endl;
    cin>>publications;

}
void professor::show()
{
    person::show();
    cout<<"no of publications="<<publications;
}
bool professor::isvalid()
{
    if(publications>20)
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