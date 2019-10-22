#include<bits/stdc++.h>
using namespace std;
bool myf(int a,int b){
return a>b;
}
int main()
{
    long int t,i,n,j,a,p;
    vector <long int> v;
    vector <long int> v1;

    cin>>t;
    while(t>0)
    {

        cin>>n;
        for(i=0; i<n; i++){
            cin>>a;
            v.push_back(a);
        }

        sort(v.begin(),v.end());

        for(i=0; i<v.size(); i++)

        {
            p = 1 ;
            for(j=i; j<v.size(); j++)
            {
                if( (v[j]-v[i]) <= 1 && i!=j )
                {
                    p++;
                }
            }
        v1.push_back(p);


        }

         sort(v1.begin(),v1.end(),myf);

         cout<<v1[0]<<endl;
        v.clear();
        v1.clear();
        t--;
    }
    return 0;
}
