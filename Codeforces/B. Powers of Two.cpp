#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,p=0,j;
    vector<int>odd,even,odd1,even1;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        if(a%2==0){
            even.push_back(a);
        }

        else
        {
            odd.push_back(a);
        }
    }




    for(i=0;i<odd.size();i++)
    {
        for(j=0;j<odd1.size();j++){
                cout<<odd[i]+odd1[j]<<endl;
                cout<<ceil(log2(odd[i]+odd1[j]))<<" "<<floor(log2(odd[i]+odd1[j]))<<endl;
            if(ceil(log2(odd[i]+odd1[j])) == floor(log2(odd[i]+odd1[j])))
                p++;
        }
    }
    cout<<p<<endl;
    return 0;


}
