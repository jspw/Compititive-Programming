
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int Flag, Mod4, Mod100, Mod400, Mod15, Mod55;

    string str;
    int bal=0;

    while(cin>>str)
    {
        if(bal!=0)
            cout<<endl;
        bal++;
        bool leap=false,ha=false,bu=false,od=true;
        Mod4 =  Mod100 = Mod400 = Mod15 = Mod55 =0;
        for(int i=0;i<str.size();i++){
            Mod4 = ((Mod4 * 10) + (str[i]-'0')) % 4;
        Mod100 = ((Mod100 * 10) + (str[i]-'0')) % 100;
        Mod400 = ((Mod400 * 10) + (str[i]-'0')) % 400;
        Mod15 = ((Mod15 * 10) + (str[i]-'0')) % 15;
        Mod55 = ((Mod55 * 10) + (str[i]-'0')) % 55;
        }
        if(Mod400%400 ==0)
        {
            leap=true;
            od=false;
        }
        else if(Mod4%4==0 && Mod100%100!=0)
        {
            od=false;
            leap=true;
        }


        if(Mod15%15==0)
        {
            ha=true;
            od=false;
        }

        if(leap && Mod55%55==0)
        {
            bu=true;
            od=false;
        }

        if(leap)
            cout<<"This is leap year."<<endl;
        if(ha)
            cout<<"This is huluculu festival year."<<endl;
        if(bu)
            cout<<"This is bulukulu festival year."<<endl;

        else if(od)
            cout<<"This is an ordinary year."<<endl;

    }

    return 0;
}
