#include<stdio.h>
#include<stdio.h>

main()

{
    char ch;
    printf("Enter a letter:");
    scanf("%c",&ch);
    if ( ch>='a' && ch<='z') {
        printf("The letter is lower case\n");
    }
    else if (ch>='A' && ch<='Z') {
        printf("The letter is upper case\n");
    }
    getch();
    return 0;


}
