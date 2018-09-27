#include<stdio.h>
main()
{
    char ch;
    printf("Enter ch:");
    scanf("%c", &ch);
    if(ch>='a' &&  ch<='z') {
        printf("%c is a lower case");
    }
    else {
        printf("%c is a upper case");
    }
    return 0;



}
