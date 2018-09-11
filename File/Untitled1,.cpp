#include<stdio.h>
int main()
{
    int i,x;
    FILE *fp;
    fp=fopen("Data.txt","r");
    for(i=0;i<=10;i++)
    {
        fprintf(fp,"%d\n",&i);
        printf("%d ",i);
    }
            fclose(fp);
return 0;
}
