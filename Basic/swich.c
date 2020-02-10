#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a chararter:");
    ch = getche();
    ch=tolower(ch);
    switch(ch)
    {
        case 'a' : printf("\nA for Apple\n"); break;

        case 'b' : printf("\nB for Ball\n");break;

        case 'c' : printf("\nC for Cat");break;

        case 'd' : printf("\nD for Dog");break;

        case 'e' : printf("\nE for Eat");break;

        case 'f' : printf("\nF for Frog");break;

        case 'g' : printf("\nG for Google");break;

        case 'h' : printf("\nH for Hack");break;

        case 'i' : printf("\n for Internet");break;

        case 'j' : printf("\nJ for Joystick");break;

        case 'k' : printf("\nK for Kali");break;

        case 'l' : printf("\nL for Linux");break;

        case 'm' : printf("\nM for Moon");break;

        case 'n' : printf("\nN for Netbean");break;

        case 'o' : printf("\nO for Operator");break;


        case 'p' : printf("\nP for Pixel");break;

        case 'q' : printf("\nQ for QQ");break;

        case 'r' : printf("\nR for Rex");break;

        case 's' : printf("\nS for Super");break;

        case 't' : printf("\nT for Tool");break;

        case 'u' : printf("\nU for Ubuntu");break;

        case 'v' : printf("\nV for Vertex");break;

        case 'w' : printf("\nW for Windows");break;

        case 'x' : printf("\nX for Xoo");break;

        case 'y' : printf("\nY for Yahoo");break;

        case 'z' : printf("\nZ for Zoo");break;



    }


    return 0;
}

