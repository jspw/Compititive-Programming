#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,b,p=0,q=0,j,r=0,x=0;
    char s[200002],t[200002];
    cin>>a>>b;
    cin>>s;
    cin>>t;
    vector <char> v;
    vector <char> w;

    for(i=0; i<a; i++)
        if(s[i]=='*')
            x++;

    if(x==0){
        if(strcmp(s,t)==0)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        else cout<<"NO"<<endl;
    }
    else
        {

            if(a-x<=b)
            {

                for(i=0; i<a; i++)
                {
                    if(s[i]=='*')
                    {
                        p=i;
                        break;

                    }

                    v.push_back(s[i]);

                }

              //  cout<<"p="<<p<<endl;



            //    for(i=0; i<v.size(); i++)
             //       cout<<v[i];
              //  cout<<endl;
//

                for(i=p+1; i<a; i++)
                {

                    w.push_back(s[i]);

                }

            //    for(i=0; i<w.size(); i++)
           //         cout<<w[i];
           //     cout<<endl;

                for(i=0; i<p; i++)
                {
                    if(v[i]==t[i])
                        q++;
                }

            //    cout<<"q="<<q<<endl;

                for(i=(b-w.size()),j=0; i>b, j<w.size(); i++,j++)
                {
                  //  cout<<t[i]<<" "<<w[j]<<endl;
                    if(t[i]==w[j])
                    {
                    //    cout<<t[i]<<" if "<<w[j]<<endl;
                        r++;
                    }
                }

              //  cout<<"r="<<r<<endl;

                if(q==v.size() && r==w.size())
                    cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else cout<<"NO"<<endl;
        }
    return 0;


}
