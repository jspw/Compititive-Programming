#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    FILE *file;

    char name[20]=" Mehedi";
    int length=strlen(name);
    int i;
    file = fopen("test.txt","a");
    if(file==NULL)
    {
        printf("The file doesn't exist");

    }
    else
    {
        printf("The file is opened\n");

        {
            fputc(name[i],file);
        }
        printf("File is return successfully\n");
        fclose(file);
    }
    getch();
}
