#include<bits/stdc++.h>
using namespace std;

int lcs(char *x,char *y,int l,int k){
    int mx[l+1][k+1];

    for(int i=0;i<l;i++){

        for(int j=0;j<=k;j++){
            if(i==0||j==0){
                mx[i][j]=0;
            }
            else if(x[i-1]==y[j-1]){
                mx[i][j]=mx[i-1][j-1]+1;
            }
            else{
                mx[i][j]=max(mx[i-1][j],mx[i][j-1]);
            }
        }
    }

    for(int i=0;i<l;i++){
        for(int j=0;j<k;j++)
            printf("%d ",mx[i][j]);
        printf("\n");
    }



    return mx[l-1][k-1];
}

int main(){

    char x[1000],y[1000];

    scanf("%s%s",&x,&y);
//    printf("%s this is %s",x,y);

    printf("%d\n",lcs(x,y,strlen(x),strlen(y)));

}
