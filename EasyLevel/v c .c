#include<stdio.h>

main()

{
    char ch;
    printf("Enter a letter:" , ch);
    scanf(" %c" , &ch);


    if( ch == 'a' || ch == 'i' || ch == 'e' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ) {
         printf("The letter is VOWEL\n", ch);
    }

    else {
         printf("The letter is CONSONANAT\n", ch);
    }

    return 0;

}
