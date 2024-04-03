// LAPTOP RECOMMENDATION
// 1] MULTIPLE CLASSES 2]INHERITANCE  3]POLYMORPHISM(FUNCTION OVERLOADING) 4]CONSTRUCTOR
#include<iostream>
using namespace std;
class ajay
{
 public:
     int k;
     void brand();
};
void ajay::brand()
{
cout<<"Below laptops are branded:"<<endl;
cout<<"6 for LENOVO"<<endl;
cout<<"7 for HP"<<endl;
cout<<"8 for DELL"<<endl;
cout<<"9 for ACER"<<endl;
 cout<<"###############"<<endl;
 cout<<"Press For Branded laptop:"<<endl;
 cin>>k;
 switch(k)
 {
case 6:
    cout<<"1].Lenovo Legion Slim7"<<endl;
    cout<<"2].Lenovo IdeaPad slim 5"<<endl;
    cout<<"3].Lenovo Yoga 7i"<<endl;
    cout<<"4].Lenovo ThinkBook 14s Yoga"<<endl;
    cout<<"5].Lenovo Flex 6"<<endl;
    break;
case 7:
    cout<<"1]HP 14s (2020)"<<endl;
    cout<<"2]‎HP Chromebook 11a"<<endl;
    cout<<"3]‎HP Pavilion Plus 14"<<endl;
    cout<<"4]HP Victus 15 (2022)"<<endl;
    cout<<"5]HP Envy 17 (2022)"<<endl;
    break;
case 8:
    cout<<"1]DELL Inspiron 15"<<endl;
    cout<<"2]Dell 15"<<endl;
    cout<<"3]Dell Vostro 3400 "<<endl;
    cout<<"4]Dell Latitude 3420 i7-1165G7"<<endl;
    cout<<"5]Dell XPS 7390"<<endl;
    break;
case 9:
    cout<<"1]Acer R3"<<endl;
    cout<<"2]‎Acer Swift 3"<<endl;
    cout<<"3]‎Acer nitro"<<endl;
    cout<<"4]Acer VX 5"<<endl;
    cout<<"5]Acer Spin 3"<<endl;
    break;
 }
}
class rohit
{
public:
    int price;
    rohit()
    {
    cout<<"enter ur price less than 50k and BY THE STUDENT REVIEW:";
    cin>>price;
    if(price <=50000)
    {
        cout<<"Some Laptops are below 50k and not gaming:"<<endl;
        cout<<"1.Lenovo IdeaPad slim 5"<<endl;
        cout<<"2.Acer R3"<<endl;
        cout<<"3.DELL Inspiron 15"<<endl;
        cout<<"4.Acer Spin 3"<<endl;
        cout<<"5.‎HP Pavilion Plus 14"<<endl;
    }
    else
    {
        cout<<"SORRY"<<endl;
        cout<<"YOU WILL GET IN KEY NO.03"<<endl;
    }
    }
};
class virat
{
    public:
        int cash;
        int p1,p2;
         void get(int p1,int p2)
        {
            cout<<"NOW 5,7 processor are available:"<<endl;
            cout<<"If u enter 5:"<<endl;
            cin>>p1;
            if(p1==5)
            {
                cout<<"processor  u get :"<<endl;
                cout<<"INTEL5"<<endl;
                cout<<"RYZEN5"<<endl;
            }
            cout<<"if u enter 7:"<<endl;
            cin>>p2;
             if(p2==7)
            {
                cout<<"processor  u get :"<<endl;
                cout<<"INTEL7"<<endl;
                cout<<"RYZEN7"<<endl;
            }
            else
            {
              cout<<"NOT AVAILABLE:"<<endl;
            }
        }
        void get(int cash)
        {
            cout<<"enter ur amount for gaming laptop and greater than 50k:";
            cin>>cash;
            if(cash >5000)
            {
               cout<<"1.Lenovo Flex 6"<<endl;
               cout<<"2.Lenovo Ideapad Slim 3"<<endl;
               cout<<"3.Dell Latitude 3420 i7-1165G7"<<endl;
               cout<<"4.Acer Spin 3"<<endl;
               cout<<"5.DELL Inspiron 15"<<endl;

            }

        }
};
class rahul:public rohit
{
    public:
    rahul()
    {
        rohit();
        cout<<"||out of above five laptop ||"<<endl;
        cout<<"we choose FIRST: "<<endl;
        cout<<"Lenovo IdeaPad slim 5:"<<endl;
    }
};

int main()
{
    ajay a;
    virat b;
   int c;
   int n=5;
   int p1,p2,cash;
   cout<<"Welcome to our code:"<<endl;
   cout<<" 1 for choose ur laptop brand: "<<endl;
   cout<<" 2 for less than 50k price: "<<endl;
   cout<<" 3 for graphics and gaming:"<<endl;
   cout<<" 4 for Recommended by Student Review:"<<endl;
   for(int i=1;i<n;i++)
   {
   cout<<"Press any Key Which U want:";
   cin>>c;
   switch(c)
   {
       case 1:
           a.brand();
           break;
       case 2:
           rohit();
           break;
       case 3:
           b.get(p1,p2);
           b.get(cash);
           break;
       case 4:
          rahul();
          break;
   }
   }
return 0;
}

