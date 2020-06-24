#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        bool bal = false;
        cin>>n;
        pair <int,int> temp;
        vector<pair<int,int>> pos;
        for(int i=0; i<n; i++)
        {
            int a,b;
            cin>>a>>b;
            temp.first = a;
            temp.second = b;
            pos.push_back(temp);
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i!=j)
                {
                    if(pos[i].first<pos[j].first)
                    {
                        ///swap then with each other
                        int a,b;
                        a = pos[i].first;
                        b=pos[i].second;
                        pos[i].first=pos[j].first;
                        pos[i].second=pos[j].second;
                        pos[j].first=a;
                        pos[j].second=b;

                    }
                    else if(pos[i].first==pos[j].first)
                    {
                        if(pos[i].second<pos[j].second)
                        {
                            int a,b;
                            a = pos[i].first;
                            b=pos[i].second;
                            pos[i].first=pos[j].first;
                            pos[i].second=pos[j].second;
                            pos[j].first=a;
                            pos[j].second=b;
                        }
                    }
                }
            }
        }
   //     cout<<"Sorted"<<endl;

   //     for(int i=0; i<n; i++)
   //     {
   //         cout<<pos[i].first<<" "<<pos[i].second<<endl;
   //     }
        int a =0,b=0;
        vector<char>v;

        for(int i=0; i<n; i++)
        {
            int p=pos[i].first-a;
            if(p<0)
            {
                bal = true;
                break;

            }

            if(p>0)
            {
                for(int j=0; j<p; j++)
                {
                    v.push_back('R');
                }
            }
       //     cout<<"a= "<<a<<" b= "<<b<<"\nfirst ="<<pos[i].first<<" seocnd = "<<pos[i].second<<endl;
      //      cout<<"p = "<<p<<endl;
            p=pos[i].second-b;
      //       cout<<"a= "<<a<<" b= "<<b<<"\nfirst ="<<pos[i].first<<" seocnd = "<<pos[i].second<<endl;
       //     cout<<"p = "<<p<<endl;
            if(p<0)
            {
                bal = true;
                break;

            }
            if(p>0)
            {
                for(int j=0; j<p; j++)
                {
                    v.push_back('U');
                }
            }

            a=pos[i].first;
            b=pos[i].second;



        }



        if(bal)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
       //     cout<<"Route"<<endl;

            for(int i=0; i<v.size(); i++)
            {
                cout<<v[i];
            }
            cout<<endl;
        }

    }
    return 0;
}
