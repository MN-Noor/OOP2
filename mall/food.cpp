#include"food.h"
string date;
void food:: get()
{
    item::get();
    cout<<"Enter expiry date for food"<<endl;
     cin>>date;
}
void food::show()
    {

        item::show();
        cout<<"Date of expiry:"<<date<<endl;
    }
   