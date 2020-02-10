
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        bool check =false;
        int p,q;
        cin>>p>>q;
        string str;
        cin>>str;
        char ch='a';
        char a[q+1];
        for(int j=0; j<=q; j++)
        {
            a[j]=ch;
            ch++;
        }

//        for(int j=0; j<q; j++)
//            cout<<a[j]<<" ";
//        cout<<endl;

        int s=0;
        vector<int>v;

        for(int j=0; j<q; j++)
        {
            for(int k=0; k<p; k++)
            {
                if(a[j]==str[k])
                    s++;
            }
            v.push_back(s);
            s=0;
        }
        s=0;
        for(int j=0; j<v.size(); j++)
        {
            if(v[j]%2!=0){
  //              cout<<v[j]<<" ";
                 s++;
            }
            if(s>=2)
            {
                check=true;
                break;

            }
        }
//
//        for(int j=0;j<v.size();j++)
//            cout<<v[j]<<" ";
//
//        cout<<endl;

        s=0;

        if(check==true)
        {
            cout<<"Case "<<i+1<<": "<<-1<<endl;
        }

        else
        {
            for(int j=0,k=p-1; j<p/2; j++,k--)
            {
 //               cout<<"j = "<<j<<" k = "<<k<<" \n"<<str[j]<<" "<<str[k]<<endl;
                if(str[j]!=str[k])
                {
                    s++;
                }
            }
            if(s%2==0)
                cout<<"Case "<<i+1<<": "<<s/2<<endl;
            else
                cout<<"Case "<<i+1<<": "<<s/2+1<<endl;
        }
        v.clear();
    }
}
