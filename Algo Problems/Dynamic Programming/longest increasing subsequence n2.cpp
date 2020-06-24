#include<bits/stdc++.h>
using namespace std;
int main(){

    int a[6]={1,6,2,4,5,0};
    int lis[6]={1,1,1,1,1,1};
    int i,j;
    for(i=0;i<6;i++){
        for(j=0;j<i;j++){
            if(a[j]<a[i])
            {

                if(lis[i]<lis[j]+1)
                    lis[i]=lis[j]+1;
            }
        }
    }

    cout<<*max_element(lis,lis+7);

}
