#include<stdio.h>
void main()
{
    char password[10],username[10],ch;
    int i;
    printf("Enter username :");
    gets(username);
    printf("Enter the password :");
    for (i=0;i<8;i++) {
        ch=getch();
        password[i] =ch;
        ch='*';
        printf("%c",ch);

    }
    password[i]='\0';
    printf("\n\nYour username is :%s", username);
    printf("\nYour password is :%s",password);

}
