#include<iostream>
using namespace std;
bool lewo();
bool prawo();
bool przod();
bool tyl();
bool skok();
bool przysiad();
void zadanie(int*,int);
bool (*wyk[6])()={&lewo,&prawo,&przod,&tyl,&skok,&przysiad};
int main()
{
    int *wsk,ilosc;
    cout<<"ile operacji chcesz wykonac"<<endl;
    cin>>ilosc;
    wsk = new int[ilosc];
    zadanie(wsk,ilosc);
    for(int i=0;i<ilosc;i++)
    {
    switch(*wsk)
    {
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
    wyk[(*wsk)-1]();
    break;
default:
    cout<<"blad";
    break;
    }
    wsk++;
    }
}
bool lewo()
{
    cout<<"ruch w lewo";
    true;
}
bool prawo()
{
    cout<<"ruch w prawo";
    true;
}
bool przod()
{
    cout<<"ruch w przod";
    true;
}
bool tyl()
{
    cout<<"ruch w tyl";
    true;
}
bool skok()
{
    cout<<"skok";
    true;
}
bool przysiad()
{
    cout<<"przysiad";
    true;
}

void zadanie(int *wsk,int ilosc)
{
    cout<<"### Wybierz ciag operacji###\n\t1 - lewo\n\t2 - prawo\n\t3 - przod\n\t4 - tyl\n\t5 - skok\n\t6 - przysiad\n";
    for(int i=0;i<ilosc;i++)
    {
        cin>>*wsk;
            if(*wsk==1)
            cout<<"lewo"<<endl;
            if(*wsk==2)
            cout<<"prawo"<<endl;
            if(*wsk==3)
            cout<<"przod"<<endl;
            if(*wsk==4)
            cout<<"tyl"<<endl;
            if(*wsk==5)
            cout<<"skok"<<endl;
            if(*wsk==6)
            cout<<"przysiad"<<endl;
        wsk++;

    }
    wsk=wsk-ilosc;
}
