#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t;
    char temp,s[1000];
    cin>>t;
    while(t>0){
        cin>>n;
        for(i=0;i<n;i++)
        cin>>s[i];


      //  if(n%2==0)
    //    {
          for(i=1;i<n;i=i+2)
            {
                temp=s[i];
                s[i]=s[i-1];
                s[i-1]=temp;
            }


            for(i=0;i<n;i++)
            s[i]=('z'- (s[i]-'a'));

            for(i=0;i<n;i++)
            cout<<s[i];
            cout<<endl;

      //  }
        /*
        else if(n%2!=0)
        {

            for(i=0;i<n/2;i++)
            {
                temp=s[i];
                s[i]=s[i-1];
                s[i-1]=temp;
            }

            for(i=0;i<n;i++)
            s[i]=('z'- (s[i]-'a'));

            for(i=0;i<n/2;i++)
            {
                temp=s[i];
                s[i]=s[(n-1)-i];
                s[(n-1)-i]=temp;
            }

            for(i=0;i<n;i++)
            cout<<s[i];
        } */
        t--;
    }

}
