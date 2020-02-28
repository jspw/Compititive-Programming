///Code for Matrix Chain Multiplication  using Dynamic Programming (NON-Recursive)

#include<bits/stdc++.h>
using namespace std;

void print(int i,int j,int n,int *bra,char &name)
{
    if(i==j){
        cout<<name++;
        return ;
    }

    cout<<"(";
    cout<<*((bra+j*n)+i)<<endl;
    print(i,*((bra+j*n)+i),n,bra,name);
    print(*((bra+j*n)+i)+1,j,n,bra,name);

    cout<<")";

}

int main()
{
    int n;
    cin>>n;
    int d[n];
    for(int i=0;i<n;i++)
    {
        cin>>d[i];
    }

    int cost[n][n];

    memset(cost,0,sizeof(cost));

    for(int a=1;a<n-1;a++){
        for(int i=1;i<n-a;i++){
            int j=i+a;
            int minx=100000;

            for(int k=i;k<j;k++){
                int p=cost[i][k]+cost[k+1][j]+d[i-1]*d[j]*d[k];

                if(p<minx){
                    minx=p;
                    cost[j][i]=k;
                }
            }

            cost[i][j]=minx;

        }
    }

    for(int i=0;i<n;i++)
    {

        for(int j=0;j<n;j++)
            cout<<cost[i][j]<<" ";

        cout<<endl;
    }

    cout<<"Scaller multiplication cost : "<<cost[1][n-1]<<endl;
    char name = 'A';
    print(1,n-1,n,*cost,name);

}


