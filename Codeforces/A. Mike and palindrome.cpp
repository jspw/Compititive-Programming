#include<stdio.h>
#include<string.h>
int main()
{
    char str[16];
    scanf("%s",str);
    int p=strlen(str);
    char str2[16];
    int q=0,c=0;
    for(int i=p-1;i>=0;i--){
            str2[c]=str[i];
        c++;
    }

 //   cout<<str<<" "<<str2<<endl;

    for(int i=0; i<p/2; i++)
    {
        if(str[i]!=str2[i])
            q++;
    }
    if(q==0 && p%2==1 || q == 1)
        printf("YES\n");
    else
         printf("NO\n");
    return 0;
}
