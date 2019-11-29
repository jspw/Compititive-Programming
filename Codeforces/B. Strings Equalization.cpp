#include<bits/stdc++.h>
using namespace std;

bool check(string str1,string str2)
{
    for(int i=0; i<str1.size(); i++)
    {
    //    cout<<str1[i]<<"\n";
        for(int j=0; j<str2.size(); j++){
     //       cout<<str2[j]<<" ";
            if(str1[i]==str2[j])
            {
                return true;
            }
        }

 //       cout<<endl;

    }

    return false;

}

int main()
{
    int  t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;

        if(check(str1,str2))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
