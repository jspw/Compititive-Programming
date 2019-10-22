#include<stdio.h>
main()
{
    char ch;
    printf("Enter a letter Ch:");
    scanf("%c", &ch);
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'|| ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
        printf("The letter is a voule");
    }
    else {
        printf("The lettrer is a consonent");
    }
    return 0;


}
