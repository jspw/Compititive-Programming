
#include<stdio.h>
int main(){
    int j=0,i,k=0;
    int a[10],b[10];
    for(i=0;i<3;i++)
    scanf("%d",&a[i]);
    for(i=0;i<3;i++)
    scanf("%d",&b[i]);
    for(i=0;i<3;i++)
    {
        if (a[i]>b[i]){
        j++;

        }
        else if(a[i]<b[i]){
        k++;

        }


    }
    printf("%d %d",j,k);
    return 0;
}
