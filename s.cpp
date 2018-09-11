#include<stdio.h>
int main()
{
    int a[100],i,j,n;
    printf("Enter number of array items:");
    scanf("%d",&n);
    printf("\nEnter array items:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe new array is :");

    for(j=n-1; j>=0; j--)
    {
        printf("%d ",a[j]);
    }
    return 0;
}
