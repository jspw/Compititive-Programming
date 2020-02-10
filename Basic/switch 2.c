#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a value of n:");
    scanf("%d",&n);
    switch(n)
    {
        case 1 : printf("\n1 for January"); break;
        case 2 : printf("\n2 for February");break;
        case 3 : printf("\n3 for March");break;
        case 4 : printf("\n4 for April");break;
        case 5 : printf("\n5 for May");break;
        case 6 : printf("\n6 for June");break;
        case 7 : printf("\n7 for July");break;
        case 8 : printf("\n8 for August");break;
        case 9 : printf("\n9 for September");break;
        case 10 : printf("\n10 for October");break;
        case 11 : printf("\n11 for November");break;
        case 12 : printf("\n1 for December");break;
       default : printf(" Bal Input diso tmi ? \n Tmi abr Programming Chodao!!");
    }
    getch();
    return 0;
}
